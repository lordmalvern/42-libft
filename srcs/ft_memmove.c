/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:17:04 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 10:44:52 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *temp;
	int i;
	unsigned char *d;

	temp = (unsigned char *) malloc((len * sizeof(unsigned char)) + 1);
	i = 0;
	d = (unsigned char *)dst;
	ft_memcpy(temp, src, len);
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	free(temp);
	dst = d;
	return (dst);
}
