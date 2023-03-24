/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:36:03 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 23:13:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	f;

	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		++f;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)

{
	char src[] = "f is also frank";
	char dest[40];
	
	ft_strncpy(dest, src, 40);
	printf(" %s\n", dest);
	return (0);
}
*/