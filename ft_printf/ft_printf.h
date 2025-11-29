/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:03:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 01:03:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf_putchar(char c);
int	ft_printf_putstr(char *str);
int	ft_printf_putnbr(int n);
int	ft_printpercent(void);
int	ft_print_unsigned(unsigned int nbr);
int	ft_ptr_hex(uintptr_t n);
int	ft_print_hex(unsigned int n, const char letter);
int	ft_print_pointer(void *ptr);
int	check_letter(va_list args, const char letter);
int	process_format(va_list args, const char *str, int *i);
int	ft_printf(const char *str, ...)__attribute__((format(printf, 1, 2)));

#endif