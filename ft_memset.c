/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:09:03 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/03 15:21:50 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char fill;
	int i;

	i = 0;
	fill = c;
	while(i < len)
		b[i] = fill;
	return (b);
}
