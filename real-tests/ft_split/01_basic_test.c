/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:33:21 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 08:00:21 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	split_basic_test(void)
{
	char	**tab;
	int		result;

	result = -1;
	tab = ft_split("Hello World", ' ');
	if (tab && tab[0] && tab[1] && !tab[2])
	{
		if (ft_strncmp(tab[0], "Hello", 5) == 0
			&& ft_strncmp(tab[1], "World", 5) == 0)
			result = 0;
	}
	return (result);
}
