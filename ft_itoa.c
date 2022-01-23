/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:16:39 by acilione          #+#    #+#             */
/*   Updated: 2022/01/13 14:51:51 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_num(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size += 1;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;

	size = size_num(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	num = (long)n;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	else if (num == 0)
		str[0] = '0';
	str[size] = 0;
	size -= 1;
	while (size >= 0 && num)
	{
		str[size] = (num % 10) + '0';
		num /= 10;
		size--;
	}
	return (str);
}
