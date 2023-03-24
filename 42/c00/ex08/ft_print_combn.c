/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:34:59 by coder             #+#    #+#             */
/*   Updated: 2023/03/05 15:56:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			if (n == 2)
			{
				write(1, &i, 1);
				write(1, &j, 1);
			}		
					j++;
		}
					i++;
	}
}
/*
int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
	return (0);
}
*/