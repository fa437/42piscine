/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:41:27 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:55:58 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	destlen;

	destlen = str_len(dest);
	x = 0;
	while (src[x] != '\0')
	{
		dest[destlen] = src[x];
		x++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}


#include <stdio.h>
#include <string.h>

int main (void)
{
	char dest[6] = "hello";
	char src[19] = " sandra from ghana";
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
