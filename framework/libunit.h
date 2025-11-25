/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:50:51 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/24 15:54:00 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h> /* Pour malloc, free, exit*/
# include <unistd.h> /* Pour write, fork */
# include <sys/wait.h> /* Pour wait */
# include <signal.h> /* Pour les differents signaux */

typedef struct s_unit_test
{
	char				*name;
	int					(*f)(void);
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(t_unit_test **list, char *name, int (*f)(void));
int		launch_tests(t_unit_test **list);

#endif