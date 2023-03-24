/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:52:00 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 16:39:34 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	f;

	f = 0;
	while ((s1[f] || s2[f]) && (f < n))
	{
		if (s1[f] < s2[f] || s1[f] > s2[f])
			return (s1[f] - s2[f]);
		f++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "hello";
	char *s2 = "fii";
	unsigned int n = 2;
	printf("%d", ft_strncmp(s1,s2,n));
	return (0);
	
}
*/