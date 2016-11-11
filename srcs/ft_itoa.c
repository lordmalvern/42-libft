/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:23:19 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/10 20:31:00 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static void	num_digits(long n, long *place, int *size, int *sign, int *i)
{
	*i = 0;
	*sign = (n < 0) ? 1 : 0;
	*size = 1;
	*place = 1;
	while (n % (*place * 10) != n)
	{
		*place *= 10;
		*size += 1;
	}
}

char		*ft_itoa(int n)
{
	char	*out;
	long	place;
	int		size;
	int		sign;
	int		i;
	long	num;

	num = n;
	num_digits(num, &place, &size, &sign, &i);
	out = (char *)malloc(((size) * sizeof(char)) + 1 + sign);
	if (out == NULL)
		return (NULL);
	if (sign)
	{
		num *= -1;
		out[i++] = '-';
	}
	while (place != 0)
	{
		out[i] = (num / place) + 48;
		num -= (num / place) * place;
		place /= 10;
		i++;
	}
	out[i] = '\0';
	return (out);
}
