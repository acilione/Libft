/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:07:16 by acilione          #+#    #+#             */
/*   Updated: 2022/01/12 17:54:51 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (src >= dst)
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else
		while (len--)
			str1[len] = str2[len];
	return (str1);
}
