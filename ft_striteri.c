/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:09:10 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/04 17:09:41 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(unsigned int, char *))
{
	int i;
	int len;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		f(i, &s[i]);
		i++;
	}
}
