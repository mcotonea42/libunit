/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:21:34 by jfabregu          #+#    #+#             */
/*   Updated: 2025/11/10 16:21:36 by jfabregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_size(int n)
{
	size_t			len;
	unsigned int	nbr;

	len = 1;
	if (n < 0)
	{
		len++;
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr >= 10)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	nbr;

	len = ft_size(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		s[0] = '0';
	while (nbr > 0)
	{
		len--;
		s[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
