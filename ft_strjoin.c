/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:58:39 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 13:30:05 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_str(char *dst, char const *src, size_t *i, size_t *j)
{
	while (src[*i])
	{
		dst[*j] = src[*i];
		(*i)++;
		(*j)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	copy_str(str, s1, &i, &j);
	i = 0;
	copy_str(str, s2, &i, &j);
	str[j] = '\0';
	return (str);
}
