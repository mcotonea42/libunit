/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:37:37 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:59:48 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	split_basic_test(void);
int	split_delimiters_test(void);
int	split_null_test(void);
int	split_force_crash_test(void);

int	split_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ft_putstr_fd("Test of the ft_split function\n", 1);
	load_test(&testlist, "Basic test", &split_basic_test);
	load_test(&testlist, "Only delimiters", &split_delimiters_test);
	load_test(&testlist, "NULL input", &split_null_test);
	load_test(&testlist, "Force crash", &split_force_crash_test);
	return (launch_tests(&testlist));
}
