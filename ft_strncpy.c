/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:36:50 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/02 17:24:56 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	i = 0;
	while (src[i] != '\0' && i != len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
