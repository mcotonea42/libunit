/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotonea <mcotonea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:01:57 by mcotonea          #+#    #+#             */
/*   Updated: 2025/11/24 16:07:02 by mcotonea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **list, char *name, int (*f)(void))
{
	t_unit_test	*new;
	t_unit_test	*tmp;

	new = malloc(sizeof(t_unit_test));
	if (!new)
		return ;
	new->name = name;
	new->f = f;
	new->next = NULL;
	if (!(*list))
		*list = new;
	else
	{
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
