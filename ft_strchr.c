/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:59:07 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 13:30:43 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s != '\0')
	{
		if (cc == *s)
			return ((char *)s);
		++s;
	}
	if (cc == '\0')
		return ((char *)s);
	return (0);
}
