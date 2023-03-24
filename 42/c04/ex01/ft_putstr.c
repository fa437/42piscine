/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:55:55 by coder             #+#    #+#             */
/*   Updated: 2023/03/11 17:50:51 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		write(1, &str[f], 1);
		f++;
	}
}
/*
int	main(void)
{
	ft_putstr("hello my fellow");
}
*/