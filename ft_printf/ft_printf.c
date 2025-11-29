/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:02:19 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/29 22:15:20 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_letter(va_list args, const char letter)
{
	int	i;

	i = 0;
	if (letter == '\0')
		return (-1);
	else if (letter == 'c')
		i += ft_printf_putchar(va_arg(args, int));
	else if (letter == 's')
		i += ft_printf_putstr(va_arg(args, char *));
	else if (letter == 'p')
		i += ft_print_pointer(va_arg(args, void *));
	else if (letter == 'd' || letter == 'i')
		i += ft_printf_putnbr(va_arg(args, int));
	else if (letter == 'u')
		i += ft_print_unsigned(va_arg(args, unsigned int));
	else if (letter == 'x' || letter == 'X')
		i += ft_print_hex(va_arg(args, unsigned int), letter);
	else if (letter == '%')
		i += ft_printpercent();
	if (i == -1)
		return (-1);
	return (i);
}

int	process_format(va_list args, const char *str, int *i)
{
	int	ret;

	if (str[*i] == '%')
	{
		ret = check_letter(args, str[*i + 1]);
		if (ret == -1)
			return (-1);
		(*i)++;
	}
	else
	{
		ret = ft_printf_putchar(str[*i]);
		if (ret == -1)
			return (-1);
	}
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		total_length;
	int		i;
	int		ret;
	va_list	args;

	total_length = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		ret = process_format(args, str, &i);
		if (ret == -1)
			return (va_end(args), -1);
		total_length += ret;
		i++;
	}
	va_end(args);
	return (total_length);
}
