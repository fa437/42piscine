/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:21:58 by fasare            #+#    #+#             */
/*   Updated: 2023/03/20 13:51:23 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
/*
int	main(void)
{
	int	*range;
	int	i;
	int	c;

	range = ft_range(2, 5);
	if (range == NULL)
	{
		write(2, "NULL\n", 6);
		return (1);
	}
	i = 0;
	while (i <= 3)
	{
		c = range[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	free(range);
	return (0);
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
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	f = 0;
	while (min <= max)
	{
		range[f] = min;
		min++;
		f++;
	}
	return (range);
}

int		main(void)
{
	int	*range;
	int	i;
	char c;

	range = ft_range(5, 9);
	{
		c = range[i] +'0';
		write(1, &c, 1);
		i++;
	}
	free(range);
	return (0);
}

int		main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min = 5;
	max = 10;
	result = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		write(1, &result[i], sizeof(result[i]));
		i++;
	}
	return (0);
}

#include<stdio.h>

int main()
{
	int min = 10;
	int max = 9;
	printf("%d\n", *ft_range(min, max));
}

int	main(void)
{
	int	min;
	int	max;
	int *result;

	min = 1;
	max = 5;
	result = ft_range(min, max);
	write(1, result, sizeof(result));
}
*/