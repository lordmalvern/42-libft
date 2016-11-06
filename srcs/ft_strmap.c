/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:09:50 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 18:57:11 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*out;

	len = ft_strlen(s);
	out = ft_strnew(len);
	i = 0;
	while (i <= len)
	{
		out[i] = f(&s[i]);
		i++;
	}
	return (out);
}
