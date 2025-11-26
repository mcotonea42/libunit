/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:18:01 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:20:32 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	bzero_basic_test(void);
int	bzero_integrity_test(void);
int	bzero_zero_len_test(void);
int	bzero_null_test(void);

int	bzero_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ft_putstr_fd("Test of the bzero function\n", 1);
	load_test(&testlist, "Basic test", &bzero_basic_test);
	load_test(&testlist, "Integrity check", &bzero_integrity_test);
	load_test(&testlist, "Length 0", &bzero_zero_len_test);
	load_test(&testlist, "NULL ptr crash", &bzero_null_test);
	return (launch_tests(&testlist));
}
