/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:43:39 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 18:54:25 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	key;
	int		i;
	int		last;
	int		len;

	key = c;
	i = 0;
	last = -1;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == key)
			last = i;
	}
	return ((last == -1) ? NULL : s[last]);
}
