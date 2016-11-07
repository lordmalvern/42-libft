/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:51:59 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 18:20:21 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	key;
	int		i;
	int		len;
	char	*src;

	key = c;
	i = 0;
	src = (char *)s;
	len = ft_strlen(src);
	while (i <= len)
	{
		if (src[i] == key)
			return (&src[i]);
	}
	return (NULL);
}
