/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 09:54:03 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 11:51:18 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(const char *s, unsigned int start, size_t n)
{
	char 	*out;
	int 	end;
	int		i;
	out = ft_strnew(n);
	if (out == NULL)
		return (NULL);
	end = start + n;
	i = 0;
	while (start < end)
	{
		out[i] = s[start];
		start++;
		i++;
	}
	return (out);
}
