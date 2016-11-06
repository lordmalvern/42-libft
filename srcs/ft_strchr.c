/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:51:59 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 18:59:40 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	key;
	int		i;
	int		len;

	key = c;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == key)
			return (&s[i]);
	}
	return (NULL);
}
