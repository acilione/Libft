/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <acilione@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:23:20 by acilione          #+#    #+#             */
/*   Updated: 2022/01/14 10:29:07 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	check_sign(char c)
{
	int	i;

	i = 1;
	if (c == '-')
		i *= -1;
	return (i);
}

int	num_size(const char *str)
{
	int	size;

	size = 0;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		size++;
		str++;
	}
	return (size);
}

int	calc_ret(const char *str, int sign)
{
	long	num;

	num = 0;
	if (num_size(str) > 10 && sign == 1)
		return (-1);
	else if (num_size(str) > 10 && sign == -1)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (int)(*str - '0');
		str++;
	}
	num *= sign;
	if (num > 2147483647)
		return (-1);
	else if (num < -2147483648)
		return (0);
	return ((int)num);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign *= check_sign(*str);
		str++;
	}
	return (calc_ret(str, sign));
}
