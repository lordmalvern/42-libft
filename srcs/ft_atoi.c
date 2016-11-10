/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:46:33 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/09 16:19:07 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 0;
	while (!ft_isprint(str[i]) || str[i] == ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]) != 0)
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	if (str[i] == '0' && !ft_isdigit(str[i + 1]))
		return (0);
	while (ft_isdigit(str[i]) != 0)
	{
		n *= 10;
		n += (str[i] - 48);
		i++;
	}
	n *= (sign == 1) ? -1 : 1;
	return (n);
}
