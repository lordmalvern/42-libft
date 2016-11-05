/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:19:11 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/04 17:19:47 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char *))
{
	int i;
	int len;
	char *out;

	len = ft_strlen(s);
	out = ft_strnew(len);
	i = 0;
	while (i <= len)
	{
		out[i] = f(i, &s[i]);
		i++;
	}
	return (out);
}
