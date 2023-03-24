/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:12:28 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 00:38:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if (str[f] >= 'a' && str[f] <= 'z')
			str[f] -= 32;
		f++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "francis";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 
*/