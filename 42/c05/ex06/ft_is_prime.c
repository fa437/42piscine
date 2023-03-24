/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:02:48 by fasare            #+#    #+#             */
/*   Updated: 2023/03/15 15:02:49 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	int nb = 8;
	int result;

	result = ft_is_prime(nb);
	printf ("%d\n", result);
	return (0);
}
*/
/*A prime numb is a + int > 1 that can only be /
evenly by 1 and itself.
prime number from 0 to 100
2, 3, 5, 7, 11, 13, 17, 19,
23, 29, 31, 37, 41, 43, 47,
53, 59, 61, 67, 71, 73, 79, 
83, 89, 97*/