/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:49:34 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 18:23:49 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	key;
	size_t			i;
	unsigned char	*src;

	i = 0;
	key = c;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == key)
			return (&src[i]);
	}
	return (NULL);
}
