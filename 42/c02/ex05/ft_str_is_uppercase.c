/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:13:34 by coder             #+#    #+#             */
/*   Updated: 2023/03/07 23:20:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] <= 'Z') && (str[f] >= 'A'))
		f++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	letter;
	char	y[] = "ABC";
	letter = ft_str_is_lowercase(y);
	printf("%d\n", letter);
}
*/