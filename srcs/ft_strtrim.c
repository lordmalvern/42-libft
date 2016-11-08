/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 10:22:19 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/07 09:38:28 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	iswhtspc(char c)
{
	return ((c == ' ') || (c == '\n') || (c == '\t'));
}

char		*ft_strtrim(const char *s)
{
	char	*out;
	int		beg;
	int		end;
	int		i;

	end = ft_strlen(s);
	beg = 0;
	while (iswhtspc(s[beg]))
		beg++;
	while (iswhtspc(s[end]))
		end--;
	i = 0;
	out = ft_strnew(end - beg);
	if (out == NULL)
		return (NULL);
	while (beg <= end)
	{
		out[i] = s[beg];
		i++;
		beg++;
	}
	return (out);
}
