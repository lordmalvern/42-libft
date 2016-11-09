/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:15:33 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/08 15:14:13 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	size_t	i;
	char	*b;

	lit_len = ft_strlen(little);
	i = 0;
	b = (char *)big;
	if (lit_len == 0 || ft_strequ(big, little))
		return (b);
	while (i < (len - lit_len) && big[i] != '\0')
	{
		if (ft_strnequ(&big[i], little, lit_len))
			return (&b[i]);
		i++;
	}
	return (NULL);
}
