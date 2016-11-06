/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:21:51 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 18:41:32 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	key;
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	s = src;
	d = dst;
	key = c;
	while (i < n && s[i] != key)
	{
		d[i] = s[i];
		i++;
	}
	dst = d;
	return ((i < n) ? &dst[i + 1] : NULL);
}
