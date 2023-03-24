/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:37:56 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 23:13:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] >= 65 && str[f] <= 90) || (str[f] >= 97 && str[f] <= 122))
		f++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main (void)
{
	char str []=" ";
	
	int alpha;

	alpha = ft_str_is_alpha(str);
	printf("alpha: %d", alpha);
	return (0);
}
*/