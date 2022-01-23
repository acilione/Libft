/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:48:21 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 13:29:26 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	find_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (check_set(set, s1[i]))
		i++;
	return (i);
}

size_t	find_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (check_set(set, s1[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = find_start(s1, set);
	if (!(*s1) || start == ft_strlen(s1))
		return (ft_calloc(1, 1));
	end = find_end(s1, set);
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[start] && start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
