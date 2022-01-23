/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:40:53 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 13:30:59 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	ch;

	ch = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n-- > 0)
	{
		if (ch == *tmp)
			return ((void *)tmp);
		tmp++;
	}
	return (NULL);
}
