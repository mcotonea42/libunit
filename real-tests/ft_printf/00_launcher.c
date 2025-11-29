/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:12:46 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/29 21:15:31 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	ft_printf_basic_test(void);

int	ft_printf_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
		ft_putstr_fd("Test of the ft_printf function\n", 1);

	load_test(&testlist, "Basic test", &ft_printf_basic_test);
	return (launch_tests(&testlist));
}