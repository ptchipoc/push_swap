/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:22:23 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/18 11:22:26 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				data;
	int				index;
}	t_stack;

// main.c
int	main(int ac, char **av);

// init_stack.c
void    init_stack(int ac, char **av, t_stack *a, t_stack *b);

// add_back.c
t_stack *create_node(long long value);
void    add_back(long long value, t_stack **back);

// ft_utils.c
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
long long	ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);

// ft_split.c
char	**ft_split(char const *s, char c);
static int	split_words(char **result, char const *s, char c, int word);
static int	numwords(char const *s, char c);

#endif
