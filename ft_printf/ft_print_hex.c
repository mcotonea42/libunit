/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:45:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 01:45:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char letter)
{
	int	i;
	int	ret;

	i = 0;
	if (n >= 16)
	{
		ret = ft_print_hex(n / 16, letter);
		if (ret == -1)
			return (-1);
		i += ret;
		n %= 16;
	}
	if (n <= 9)
		ret = ft_printf_putchar(n + '0');
	else
	{
		if (letter == 'x')
			ret = ft_printf_putchar(n - 10 + 'a');
		if (letter == 'X')
			ret = ft_printf_putchar(n - 10 + 'A');
	}
	if (ret == -1)
		return (-1);
	return (i + ret);
}
