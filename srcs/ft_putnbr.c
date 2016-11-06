/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:58:04 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/02 11:29:01 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	char	digit;
	int		place;

	place = 1;
	if (n == 0)
		ft_putchar('0');
	else
	{
		while (n % (place * 10) != n)
			place *= 10;
		while (n != 0)
		{
			digit = (n / place) + 48;
			ft_putchar(digit);
			n -= (n / place) * place;
			place /= 10;
		}
	}
}
