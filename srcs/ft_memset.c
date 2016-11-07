/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:09:03 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 16:45:55 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	fill;
	unsigned char	*temp;
	size_t			i;

	i = 0;
	fill = c;
	temp = b;
	while (i < len)
		temp[i] = fill;
	b = temp;
	return (b);
}
