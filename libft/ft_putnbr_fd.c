/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfabregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:19:24 by jfabregu          #+#    #+#             */
/*   Updated: 2025/11/10 19:19:25 by jfabregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	writable;

	if (fd == 0)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write(fd, "-", 1);
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		writable = (n % 10) + 48;
		write(fd, &writable, 1);
	}
}
