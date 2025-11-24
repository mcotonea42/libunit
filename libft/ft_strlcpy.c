/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:35:59 by jfabregu          #+#    #+#             */
/*   Updated: 2025/10/29 12:26:58 by jfabregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (src_len + 1 <= size)
		ft_memcpy(dest, src, src_len + 1);
	else
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (src_len);
}
