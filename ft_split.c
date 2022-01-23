/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:00:41 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 15:52:02 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	mem_alloc_check(char **str_arr, int str_idx, int size)
{
	str_arr[str_idx] = (char *)malloc(size);
	if (!str_arr[str_idx])
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	char	*start;
	int		str_idx;

	if (!s)
		return (0);
	str_arr = (char **)ft_calloc((count_strings(s, c) + 1), sizeof(char *));
	if (!str_arr)
		return (0);
	str_idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s)
				s++;
			if (!mem_alloc_check(str_arr, str_idx, s - start + 1))
				return (0);
			ft_strlcpy(str_arr[str_idx++], start, s - start + 1);
		}
		else
			s++;
	}
	return (str_arr);
}
