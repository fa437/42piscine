/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:03:19 by fasare            #+#    #+#             */
/*   Updated: 2023/03/15 15:03:39 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	nb++;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 78;
	int result;
	result = ft_find_next_prime(nb);
	printf ("%d\n", result);
	return (0);
}
*/
/*
A prime numb is a + int > 1 that can only be /
evenly by 1 and itself.
prime number from 0 to 100
2, 3, 5, 7, 11, 13, 17, 19,
23, 29, 31, 37, 41, 43, 47,
53, 59, 61, 67, 71, 73, 79, 
83, 89, 97*/