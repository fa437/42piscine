/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:30:42 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:41:51 by fasare           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	a;

	len = str_len(dest);
	a = 0;
	while (src[a] != '\0' && a < nb)
	{
		dest[len] = src[a];
		a++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/
#include <stdio.h>
#include <string.h>

int main (void)
{
	char dest[20] = "how are ";
	char src[20] = "you?";
	unsigned int nb = 10;
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}
