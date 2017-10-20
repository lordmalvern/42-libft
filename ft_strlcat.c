/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:04:12 by bpuschel          #+#    #+#             */
/*   Updated: 2017/10/19 18:15:34 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	int	i;
	int	j;
	int size1;
	int size2;
	int	n;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	i = size1;
	j = -1;
	n = size - size1 - 1;
	while (s2[++j] != '\0' && j < n)
		s1[i++] = s2[j];
	s1[i] = '\0';
	return (size1 + size2);
}
