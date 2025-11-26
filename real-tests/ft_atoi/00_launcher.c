/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:00:00 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:56:00 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	atoi_basic_test(void);
int	atoi_negative_test(void);
int	atoi_zero_test(void);
int	atoi_max_test(void);
int	atoi_min_test(void);

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ft_putstr_fd("Test of the ft_atoi function\n", 1);
	load_test(&testlist, "Basic '42'", &atoi_basic_test);
	load_test(&testlist, "Negative '-42'", &atoi_negative_test);
	load_test(&testlist, "Zero '0'", &atoi_zero_test);
	load_test(&testlist, "Int Max", &atoi_max_test);
	load_test(&testlist, "Int Min", &atoi_min_test);
	return (launch_tests(&testlist));
}
