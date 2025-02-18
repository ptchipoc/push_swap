/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:08:00 by ptchipoc          #+#    #+#             */
/*   Updated: 2024/05/27 18:08:04 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstr(const char *s, int *i)
{
	int	c;

	c = 0;
	if (s == NULL)
		ft_putstr("(null)", i);
	else
	{
		while (s[c] != '\0')
		{
			ft_putchar(s[c], i);
			c++;
		}
	}
}

void	ft_format(const char *s, va_list args, int *i)
{
	if (*s == '%')
		ft_putchar(*s, i);
	else if (*s == 's')
		ft_putstr(va_arg(args, char *), i);
	else if (*s == 'c')
		ft_putchar(va_arg(args, int), i);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(args, int), i);
	else if (*s == 'u')
		ft_put(va_arg(args, unsigned int), i);
	else if (*s == 'x')
		ft_hex(va_arg(args, unsigned int), 0, i);
	else if (*s == 'X')
		ft_hex(va_arg(args, unsigned int), 1, i);
	else if (*s == 'p')
		ft_ptr(va_arg(args, void *), i);
}

int	ft_printf(const char *l, ...)
{
	int		total;
	va_list	args;

	total = 0;
	va_start(args, l);
	while (*l)
	{
		if (*l == '%')
			ft_format(++l, args, &total);
		else
			ft_putchar(*l, &total);
		l++;
	}
	va_end(args);
	return (total);
}
