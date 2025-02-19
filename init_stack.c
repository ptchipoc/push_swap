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

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

void	init_stack(int ac, char **av, t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	char	**in_str;

	i = 0;
	while (++i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			in_str = ft_split(av[i], ' ');
			j = -1;
			while (in_str[++j])
				add_back(ft_atoi(in_str[j]), &a);
			free_matriz(in_str);
		}
		else
			add_back(ft_atoi(av[i]), &a);
	}
	verify_stack(a);
	//call_sort(&a, & &b);
	free_stack(&a);
}
