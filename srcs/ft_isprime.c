/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpuschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:59:25 by bpuschel          #+#    #+#             */
/*   Updated: 2016/11/14 16:52:53 by bpuschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*	sift: helper function for sieve
**	
**	Performs steps 1-4 of the Erasthosthenes' Sieve algorithm detailed
**	in description for sieve.
**	Returns array of Boolean values.
*/
static int	*sift(int sqrt, int n, int *tot)
{
	int i;
	int *num_nums;
	int	*primes;

	i = 0;
	num_nums = (int *)ft_memalloc((sqrt - n) * sizeof(int));
	if (num_nums == NULL)
		return NULL;
	while (i <= (sqrt-n))
		num_nums[i++] = 1; 
	while (n <= sqrt)
	{
		if(num_nums[n - 2] == 1)
		{
			*tot += 1;
			i = n * n;
			while (i <= sqrt)
			{
				num_nums[i - 2] = 0;
				i += n;
			}
		}
		n++;
	}
	return (num_nums);
}
/*	sieve: Erastosthenes' Sieve to determine all primes <= sqrt(num)
**	Uses Erastosthenes' Sieve to calculate all primes <= sqrt(num)
**	Steps:
**	1) Create an array of Boolean values for the numbers 2 through sqrt(num).
**	2) Initialize all Boolean values to 1.
**	3) Iterate through array, if array[i] == 1, do the next step.
**	4) Set all Boolean values of multiples of array[i] to 0.
**	5) Once array is iterated through, copy all primes found into new array.
**	Returns array of prime numbers between 2 and sqrt(num).
*/
static int	*sieve(int num, int *tot)
{
	int sqrt;
	int i;
	int j;
	int *num_nums;
	int	*primes;

	sqrt = ft_sqrt(num);
	i = 0;
	j = 0;
	num_nums = sift(sqrt, 2, tot);
	if (num_nums == NULL)
		return (NULL);
	primes = (int *)ft_memalloc(tot * sizeof(int));
	if (primes == NULL)
		return (NULL);
	while (i < (sqrt - 2))
	{
		if (num_nums[i] == 1)
			primes[j++] = i + 2;
		i++;
	}
	ft_memdel(&num_nums);
	return (primes);
}
/*	ft_isprime: determine primality of number num
**	
**	Uses trial division and Erastosthenes' Sieve to determine the primality of
**	an integer num.
**	Returns 1 if true, 0 if false.
*/
int	ft_isprime(int num)
{
	int *primes;
	int tot;
	int i;

	if (num % 2 == 0 && num % 3 == 0)
		return (0);
	tot = 0;
	primes = sieve(num, &tot);
	if (primes == NULL)
		return (0);
	i = 2;
	while (i < tot)
	{
		if (num % primes[i] != 0)
			return (0);
	}
	return (1);
}
