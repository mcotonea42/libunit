/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:14:01 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:58:57 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	bzero_basic_test(void)
{
	char	buffer[10];

	ft_strlcpy(buffer, "Hello", 10);
	ft_bzero(buffer, 2);
	if (buffer[0] == 0 && buffer[1] == 0)
		return (0);
	return (-1);
}
