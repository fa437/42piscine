/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 00:07:12 by fasare            #+#    #+#             */
/*   Updated: 2023/03/17 00:16:15 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	y = argc - 1;
	while (y > 0)
	{
		x = 0;
		while (argv[y][x] != '\0')
		{
			write (1, &argv[y][x], 1);
			x++;
		}
		write (1, "\n", 1);
		y--;
	}
	return (0);
}
