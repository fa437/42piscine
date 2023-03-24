/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:17:16 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 21:56:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	f;

	f = 0;
	while (src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	dest[f] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)

{
    char src[30] = "f is francis";
	char dest[100];
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    
    return 0;
}
*/