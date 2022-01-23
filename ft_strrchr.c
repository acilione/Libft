/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:37:33 by acilione          #+#    #+#             */
/*   Updated: 2022/01/15 13:29:44 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = ft_strlen(s);
	cc = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
