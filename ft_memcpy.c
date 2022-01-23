/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:47:06 by acilione          #+#    #+#             */
/*   Updated: 2022/01/12 17:56:57 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (!dst && !src)
		return (0);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
