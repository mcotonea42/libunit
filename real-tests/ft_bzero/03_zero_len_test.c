/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_zero_len_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:16:29 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:59:27 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	bzero_zero_len_test(void)
{
	char	buffer[10];

	ft_strlcpy(buffer, "Hello", 10);
	ft_bzero(buffer, 0);
	if (buffer[0] == 'H')
		return (0);
	return (-1);
}
