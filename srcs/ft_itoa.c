/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:23:19 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 16:31:26 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static void	num_digits(int n, int *place, int *size)
{
	while (n % (*place * 10) != n)
	{
		*place *= 10;
		*size += 1;
	}
}

char		*ft_itoa(int n)
{
	char	*out;
	int		place;
	int		size;
	int		sign;
	int		i;

	i = 0;
	size = 0;
	sign = (n <= 0) ? 1 : 0;
	place = 1;
	if (n < 0)
		n *= -1;
	num_digits(n, &place, &size);
	out = (char *)malloc(((sign + size) * sizeof(char)) + 1);
	if (out == NULL)
		return (NULL);
	while (place != 0)
	{
		out[i] = (n / place) + 48;
		n -= (n / place) * place;
		place /= 10;
		i++;
	}
	out[i] = '\0';
	return (out);
}
