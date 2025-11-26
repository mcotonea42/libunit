/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_force_crash_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:52:59 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 08:00:39 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	split_force_crash_test(void)
{
	char	**tab;

	tab = ft_split(NULL, ' ');
	tab[0] = "Crash me";
	return (0);
}
