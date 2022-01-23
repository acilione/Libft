/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:50:18 by acilione          #+#    #+#             */
/*   Updated: 2022/01/13 20:16:30 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ndl;
	size_t	hay;

	ndl = 0;
	hay = 0;
	if (!needle[ndl])
		return ((char *)haystack);
	while (hay < len && haystack[hay])
	{
		ndl = 0;
		while (hay + ndl < len && haystack[hay + ndl] == needle[ndl])
		{
			if (!needle[ndl] || !needle[ndl + 1])
				return ((char *)haystack + hay);
			ndl++;
		}
		hay++;
	}
	return (0);
}
