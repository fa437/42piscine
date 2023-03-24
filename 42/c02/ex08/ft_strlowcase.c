/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:40:28 by coder             #+#    #+#             */
/*   Updated: 2023/03/10 01:40:45 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if (str[f] >= 'A' && str[f] <= 'Z')
			str[f] = str[f] + 32;
		f++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "FRANCIS";
	
	printf("before: %s\n", s);
	printf("after: %s\n", ft_strlowcase(s));
	return (0);
} 
*/