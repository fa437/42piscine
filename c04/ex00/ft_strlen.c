/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:50:35 by coder             #+#    #+#             */
/*   Updated: 2023/03/11 16:41:18 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		f++;
	}
	return (f);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i", ft_strlen("hello my fellow"));
}
*/