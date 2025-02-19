/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:08:19 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/18 13:08:34 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *create_node(long long value)
{
    t_stack *new_node;
    
    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return (NULL);
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    return (new_node);
}

void	add_back(long long data, t_stack **a)
{
	t_stack	*temp;
	t_stack	*new_node;
	
	new_node = create_node(data);
	if (!*a)
	{
		*a = new_node;
		return ;
	}
	temp = *a;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
}
