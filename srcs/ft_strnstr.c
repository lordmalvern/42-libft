/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:15:33 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 18:21:25 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	int		i;
	char	*b;

	lit_len = ft_strlen(little);
	i = 0;
	b = (char *)big;
	if (lit_len == 0)
		return (b);
	while (big[i] != '\0')
	{
		if (ft_strnequ(&big[i], little, len))
			return (&b[i]);
		i++;
	}
	return (NULL);
}
