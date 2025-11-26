/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:37:04 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 08:00:30 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	split_null_test(void)
{
	char	**tab;

	tab = ft_split(NULL, ' ');
	if (tab == NULL)
		return (0);
	return (-1);
}
