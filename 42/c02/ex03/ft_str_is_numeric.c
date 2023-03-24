/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:01:11 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 23:13:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	f;

	f = 0;
	while (str[f])
	{
		if (str[f] < '0' || str[f] > '9')
		{
			return (0);
		}
		f++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;
	char a[] = "13345";
	num = ft_str_is_numeric(a);
	printf("%d\n", num);
}
*/