/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:31:50 by jfabregu          #+#    #+#             */
/*   Updated: 2025/11/04 17:31:51 by jfabregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	c2;

	i = ft_strlen(s);
	c2 = (unsigned char)c;
	if (c2 == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c2)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
