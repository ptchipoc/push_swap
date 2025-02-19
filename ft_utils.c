/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:37:20 by ptchipoc          #+#    #+#             */
/*   Updated: 2025/02/18 13:37:22 by ptchipoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[l] != '\0' && l < (size - 1))
		{
			dst[l] = src[l];
			l++;
		}
		dst[l] = '\0';
	}
	return (ft_strlen(src));
}

long long	ft_atoi(const char *str)
{
	long long	signal;
	long long	result;

	signal = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		signal = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
		result = (result * 10) + (*(str++) - 48);
	return (result * signal);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
