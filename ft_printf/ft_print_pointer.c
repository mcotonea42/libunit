/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:51:07 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 09:51:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hex(uintptr_t n)
{
	int		count;
	int		ret;
	char	*str;

	str = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		ret = ft_ptr_hex(n / 16);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_printf_putchar(str[n % 16]);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	int	i;
	int	ret;

	i = 0;
	if (ptr == NULL)
	{
		ret = write(1, "(nil)", 5);
		if (ret == -1)
			return (-1);
		i += ret;
	}
	else
	{
		ret = ft_printf_putstr("0x");
		if (ret == -1)
			return (-1);
		i += ret;
		ret = ft_ptr_hex((uintptr_t)ptr);
		if (ret == -1)
			return (-1);
		i += ret;
	}
	return (i);
}
