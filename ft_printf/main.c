/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:10:26 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 22:10:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	OG;
	int	FT;
	char	c = 'I';
	char	*s = "Bonjour";
	int		d = 42;
	int		i = INT_MIN;
	int		u = INT_MAX;
	void	*ptr = NULL;


	OG = printf("%c %s %d %i %u %p %x %X %%\n", c, s, d, i, u, ptr, d, d);
	printf("%d\n", OG);
	FT = ft_printf("%c %s %d %i %u %p %x %X %%\n", c, s, d, i, u, ptr, d, d);
	ft_printf("%d\n", FT);
}

//quel lettre retourne -1 : t, h, z, 