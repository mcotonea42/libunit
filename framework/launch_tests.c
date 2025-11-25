/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:10:48 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/25 20:12:13 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

static int	print_result(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_putstr("[OK]\n");
			return (1);
		}
		else
			ft_putstr("[KO]\n");
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_putstr("[SIGSEV]\n");
		else if (WTERMSIG(status) == SIGBUS)
			ft_putstr("[SIGBUS]\n");
		else
			ft_putstr("[UNKNOWN SIGNAL]");
	}
	return (0);
}

static int	exec_test(int (*f)(void))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		return (0);
	if (pid == 0)
	{
		if (f() == 0)
			exit(0);
		else
			exit(1);
	}
	wait(&status);
	return (print_result(status));
}

int	launch_tests(t_unit_test **list)
{
	t_unit_test	*tmp;
	t_unit_test	*next;
	int			success_count;
	int			total_count;

	success_count = 0;
	total_count = 0;
	tmp = *list;
	while (tmp)
	{
		ft_putstr(tmp->name);
		ft_putstr(" : ");
		if (exec_test(tmp->f))
			success_count++;
		total_count++;
		next = tmp->next;
		free (tmp);
		tmp = next;
	}
	*list = NULL;
	ft_putnbr(success_count);
	ft_putstr("/");
	ft_putnbr(total_count);
	ft_putstr(" tests checked\n");
	ft_putstr("\n");
	if (success_count == total_count)
		return (0);
	return (-1);
}
