/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:41:25 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/07 16:41:18 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	if (ft_strequ(s, ""))
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
