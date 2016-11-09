/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:21:51 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/08 16:36:53 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	key;
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	key = c;
	while (i < n && s[j] != key)
	{
		d[i] = s[i];
		i++;
		j = i - 1;
	}
	dst = d;
	return ((i < n) ? &dst[i] : NULL);
}
