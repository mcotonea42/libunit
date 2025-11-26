/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_integrity_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:15:33 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/26 07:59:17 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	bzero_integrity_test(void)
{
	char	buffer[10];

	ft_strlcpy(buffer, "Hello", 10);
	ft_bzero(buffer, 2);
	if (buffer[2] == 'l')
		return (0);
	return (-1);
}
