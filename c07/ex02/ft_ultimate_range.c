/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:58:54 by fasare            #+#    #+#             */
/*   Updated: 2023/03/20 14:31:58 by fasare           ###   ########.fr       */
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
	i = max - min + 1;
	result = malloc(sizeof(int) * i);
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max >= min)
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
    int size;
    int min;
    int max;
	int i;

    i = 0;
	min = 5;
    max = 10;
    size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
        printf ("%d", range[i]);
		i++;
    }
	free (range);
	return (size);	
}


#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	f;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
	{
		return (NULL);
	}
	f = 0;
	while (min <= max)
	{
		range[f] = min;
		min++;
		f++;
	}
	return (range);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}

int main(void)
{
    int *range;
    int size;

    size = ft_ultimate_range(&range, 0, 10);

    if (size == 0)
    {
        return (1);
    }

    free(range);

    return (0);
}
*/