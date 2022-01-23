/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:45:38 by acilione          #+#    #+#             */
/*   Updated: 2022/01/12 17:48:59 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dim;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	dim = i;
	i = 0;
	while (src[i] && i + dim + 1 < dstsize)
	{
		dst[i + dim] = src[i];
		i++;
	}
	if (dim < dstsize)
		dst[i + dim] = 0;
	return (ft_strlen(src) + dim);
}
