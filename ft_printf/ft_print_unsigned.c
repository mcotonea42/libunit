/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:24:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 01:24:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	i;
	int	ret;

	i = 0;
	if (nbr >= 10)
	{
		ret = ft_print_unsigned(nbr / 10);
		if (ret == -1)
			return (-1);
		i += ret;
	}
	ret = ft_printf_putchar((nbr % 10) + '0');
	if (ret == -1)
		return (-1);
	return (i + ret);
}
