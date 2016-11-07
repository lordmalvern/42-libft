/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:09:50 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 18:22:03 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*out;
	char	*src;

	len = ft_strlen(s);
	out = ft_strnew(len);
	src = (char *)s;
	i = 0;
	while (i <= len)
	{
		out[i] = f(src[i]);
		i++;
	}
	return (out);
}
