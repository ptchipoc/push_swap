/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:50:26 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/18 12:50:28 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_stack(int ac, char **av, t_stack *a, t_stack *b)
{
	int i;
	int	j;
	char	**in_str;

	(void)b;
	i = 0;
	while (++i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			in_str = ft_split(av[i], ' ');
			j = -1;
			while (in_str[++j])
				add_back(ft_atoi(in_str[j]), &a);
		}
		else
			add_back(ft_atoi(av[i]), &a);
	}
	while (a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
}
