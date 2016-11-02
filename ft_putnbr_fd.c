/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:25:37 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/02 11:29:18 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	digit;
	int		place;

	place = 1;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		while (n % (place * 10) != n)
			place *= 10;
		while (n != 0)
		{
			digit = (n / place) + 48;
			ft_putchar_fd(digit, fd);
			n -= (n / place) * place;
			place /= 10;
		}
	}
}
