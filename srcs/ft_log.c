/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:53:52 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/15 16:58:17 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_log: calculates natural logarithm of number num
**	
**	Uses Taylor Series to find natural logarithm iteratively.
**	Taylor Series for ln(x):
**	The sum of (((-1)^(n + 1))/n) * x^n with n going from 1 to infinity.
**	Returns approximation of ln(x).
*/
double	ft_log(unsigned int x)
{
	double	log;
	int		n;

	n = 1;
	log = 0;
	while (n <= 25000)
	{
		if(n % 2 == 0)
			log += (-1 * ft_pow(x - 1, n)) / n;
		else
			log += ft_pow(x - 1, n) / n;
		n++;
	}
	return (log);
}
