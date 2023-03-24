/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:51:48 by coder             #+#    #+#             */
/*   Updated: 2023/03/08 23:16:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			printf("\\%x", str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        ft_putstr_non_printable(argv[1]);
    }
    else
    {
        printf("Usage: ./a.out <string>\n");
    }
    return 0;
}
*/