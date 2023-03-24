/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:36:12 by coder             #+#    #+#             */
/*   Updated: 2023/03/16 15:19:20 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	f;

	f = 0;
	while (s1[f] != '\0' && s2[f] != '\0' && s1[f] == s2[f])
	f++;
	return (s1[f] - s2[f]);
}
/*
#include <stdio.h>

int main()
{
    char s1[] = "hello";
    char s2[] = "helo";

    if (ft_strcmp(s1, s2) == 0)
        printf("The strings are equal!\n");
    else
        printf("The strings are not equal!\n");

    return 0;
}
*/