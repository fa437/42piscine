/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:26:02 by fasare            #+#    #+#             */
/*   Updated: 2023/03/16 23:55:09 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	y = 1;
	while (y < argc)
	{
		x = 0;
		while (argv[y][x] != '\0')
		{
			ft_putchar(argv[y][x]);
		x++;
		}
		ft_putchar('\n');
		y++;
	}
	return (0);
}
