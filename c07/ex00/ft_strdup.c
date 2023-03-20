/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 00:34:18 by fasare            #+#    #+#             */
/*   Updated: 2023/03/18 18:19:10 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*storage;
	int		f;

	storage = malloc(sizeof(*src));
	if (storage == 0)
	{
		return (0);
	}
	f = 0;
	while (src[f] != '\0')
	{
		storage[f] = src[f];
		f++;
	}
	storage[f] = '\0';
	return (storage);
}
/*
int	main(void)
{
	char	*str;
	char	*dupstr;

	str = "duplicate";
	dupstr = ft_strdup(str);
	write(1, dupstr, sizeof(dupstr));
}
*/