/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matriz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:50:21 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/19 10:50:24 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_matriz(char **stack)
{
	int	i;

	i = -1;
	while (stack[++i])
		free(stack[i]);
	free(stack);
}

void	free_exit(char **str)
{
	free_matriz(str);
	exit_program();
}

void	exit_program(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

void	has_space(char *check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (check[i])
	{
		if (check[i] != ' ')
			j++;
		i++;
	}
	if (j == 0)
		exit_program();
}
