/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:01:26 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 17:13:57 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1) + i != ((unsigned char *)s2) + i)
			return ((((unsigned char *)s1) + i) - (((unsigned char *)s2) + i));
	}
	return (0);
}
