/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:57:54 by coder             #+#    #+#             */
/*   Updated: 2023/03/23 15:48:19 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		write (1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}
