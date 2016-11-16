/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nroot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:32:39 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/14 13:50:12 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_nroot.c: get the nth root of a number "base"
**	
**	Utilizes Newton's method to calculate the nth root of a number.
**	Newton's method: 
**	1) Set x = 1 (arbitrary, could be any number < root)
**	2) Given number base and root n, set x = (x^n - base) / (n*x^n-1)
**	3) With new x, repeat calculation numerous times.
**	Returns an integer.
*/
int	ft_nroot(int base, int n)
{
	int x;
	int k;

	x = 1;
	k = 0;
	while (k < 10000)
	{
		x = (ft_pow(x, n) - base) / (n * ft_pow(x, n - 1));
		k++;
	}
	return (x);
}
