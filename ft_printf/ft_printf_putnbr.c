/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:07:34 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 01:07:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putnbr(int n)
{
	int	i;
	int	ret;

	i = 0;
	if (n == -2147483648)
		return (ft_printf_putstr("-2147483648"));
	if (n < 0)
	{
		ret = ft_printf_putchar('-');
		if (ret == -1)
			return (-1);
		n = -n;
		i++;
	}
	if (n > 9)
		i += ft_printf_putnbr(n / 10);
	ret = ft_printf_putchar(n % 10 + '0');
	if (ret == -1)
		return (-1);
	i++;
	return (i);
}
