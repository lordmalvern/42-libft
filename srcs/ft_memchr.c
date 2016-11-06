/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:49:34 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 17:12:10 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	key;
	int				i;

	i = 0;
	key = c;
	while (i < n)
	{
		if (((unsigned char *)s) + i == key)
			return (&s[i]);
	}
	return (NULL);
}
