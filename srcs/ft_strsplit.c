/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:28:49 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/06 17:35:40 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_strtok(const char *str, const char delim, int *i)
{
	char	*out;
	int		beg;
	int		end;
	int		j;

	j = 0;
	if (str[*i] == delim)
	{
		while (str[*i] == delim)
			*i = *i + 1;
	}
	beg = *i;
	while (str[*i] != delim)
		*i = *i + 1;
	end = *i;
	out = ft_strnew(end - beg);
	if (out == NULL)
		return (NULL);
	while(beg < end)
	{
		out[j] = str[beg];
		j++;
		beg++;
	}
	return (out);
}

static int	num_strings(const char *s, char d)
{
	int		i;
	int		total;
	char	*temp;

	total = 0;
	i = 0;
	while (s[i] != '\0')
	{
		temp = ft_strtok(&s[i], d, &i);
		if (temp != NULL || temp[0] != '\0')
			total++;
	}
	free(temp);
	return (total);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**out;
	int		i;
	int		j;
	int		total;

	total = num_strings(s, c);
	i = 0;
	j = 0;
	out = (char **)malloc(total * sizeof(char *));
	if (out == NULL)
		return NULL;
	while (i < total)
	{
		out[i] = ft_strtok(s, c, &j);
		i++;
	}
	return (out);
}
