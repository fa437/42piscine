/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:58:54 by fasare            #+#    #+#             */
/*   Updated: 2023/03/21 22:10:50 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int main(void)
{
    int *range;
    int min;
    int max;
    int size;
    int i;

    i = 0;
    min = 1;
    max = 5;
    size = ft_ultimate_range(&range, min, max);
    while(i < size)
    {
        printf("%d, ", range[i]);
        i++;
    }
	printf("\n");
	free (range);
	return (0);
}
*/