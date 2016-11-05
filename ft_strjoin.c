/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 10:02:01 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 11:51:43 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		i;
	int		j;
	int		k;

	out = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (out == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[j] != '\0')
	{
		out[i] = s1[j];
		i++;
		j++;
	}
	while (s2[k] != '\0')
	{
		out[i] = s2[k];
		i++;
		k++;
	}
	return (out);
}
