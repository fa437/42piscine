/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 04:27:02 by coder             #+#    #+#             */
/*   Updated: 2023/03/05 15:23:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				write(1, ",", 1);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "\b \n", 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/