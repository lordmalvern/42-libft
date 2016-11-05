/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:06:17 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/05 11:50:03 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char *out;

	out = (char *)malloc((size * sizeof(char)) + 1);
	if (out == NULL)
		return (NULL);
	ft_strclr(out);
	return (out);
}
