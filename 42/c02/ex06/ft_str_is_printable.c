/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:21:31 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 00:11:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	f;

	f = 0;
	while (str[f])
	{
		if ((str[f] >= 32) && (str[f] <= 126))
		f++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	int	print;
	char	w[] = "	";
	print = ft_str_is_printable(w);
	printf("%d\n", print);
}
*/