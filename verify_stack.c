/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:35:21 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/19 15:35:25 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_digit(t_stack *a)
{
	t_stack	*temp;
	t_stack	*temp_2;

	temp = a;
	while (temp)
	{
		temp_2 = temp->next;
		while (temp_2)
		{
			if (temp->data == temp_2->data)
			{
				free_stack(&a);
				exit_program();
			}
			temp_2 = temp_2->next;
		}
		temp = temp->next;
	}
}

void	verify_stack(t_stack *a)
{
	t_stack	*temp;

	double_digit(a);
	temp = a;
	while (temp)
	{
		if (temp->data > temp->next->data)
			return ;
		temp = temp->next;
	}
	free_stack(&a);
	exit(0);
}
