/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:06:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 01:06:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putstr(char *str)
{
	int	i;
	int	ret;

	i = 0;
	if (str == NULL)
	{
		ret = write(1, "(null)", 6);
		if (ret == -1)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		ret = write(1, &str[i], 1);
		if (ret == -1)
			return (-1);
		i++;
	}
	return (i);
}
