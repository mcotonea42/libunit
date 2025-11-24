/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:34:16 by jfabregu          #+#    #+#             */
/*   Updated: 2025/11/07 14:34:17 by jfabregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] != '\0' && ft_isinset(s[start], set))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_isinset(s[end - 1], set))
		end--;
	str = ft_substr(s, start, end - start);
	return (str);
}
