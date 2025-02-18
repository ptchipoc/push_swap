/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:11:12 by ptchipoc          #+#    #+#             */
/*   Updated: 2024/05/27 18:11:18 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *l, ...);

void	ft_what(const char *s, va_list listmap, int *i);
void	ft_putstr(const char *str, int *i);
void	ft_putchar(char c, int *i);
void	ft_putnbr(int n, int *i);
void	ft_put(unsigned int nb, int *i);
void	ft_hex(unsigned long long nbr, int ii, int *l);
void	ft_putaddress(void *ptr, int *i);
void	ft_ptr(void *p, int *i);

#endif
