/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:15:33 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/03 11:05:09 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	int		i;

	lit_len = ft_strlen(little);
	i = 0;
	if (lit_len == 0)
		return (big);
	while (big[i] != '\0')
	{
		if (ft_strnequ(&big[i], little, len))
			return (&big[i]);
		i++;
	}
	return (NULL);
}
