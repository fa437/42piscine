/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:56:46 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 17:31:28 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	size;

	a = 0;
	b = 0;
	size = 0;
	while (to_find[size])
	size++;
	if (size == 0)
		return (str);
	while (str[a])
	{
		b = 0;
		while (to_find[b] == str[a + b])
		{
			if (b == size - 1)
				return (str + a);
			b++;
		}
		a++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "Hello World";
	char to_find[] = "World";
	char *result = ft_strstr(str, to_find);
	printf("%s\n", result);
	return (0);
}
*/