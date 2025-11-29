/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:10:46 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/29 21:12:24 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	ft_printf_basic_test(void)
{
	int	ret;

	ret = ft_printf("Hello, world!\n");
	if (ret == 14)
		return (0);
	return (-1);
}