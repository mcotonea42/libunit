/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_delimiters_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:36:00 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:37:02 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	split_delimiters_test(void)
{
	char	**tab;

	tab = ft_split("    ", ' ');
	if (tab && tab[0] == NULL)
		return (0);
	return (-1);
}
