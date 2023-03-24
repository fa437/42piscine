/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasare <fasare@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:12:29 by coder             #+#    #+#             */
/*   Updated: 2023/03/10 02:13:21 by fasare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinq";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}


char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		(!(c >= '0' && c <= '9') && !(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))	
		if (c >= 48 && c <= 57) && !(c >= 65 && c <= 90) && !(c >= 97 && c <= 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[100] = "francis, f is frank, free+fun friend&foe";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}



#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	f;

	f = 0;
	while (str[f])
	{
		if (f == 0)
		{
			if (str[f] >= 'a' && str[f] <= 'z')
				str[f] = str[f] - 32;
		}
		if (str[f] == ' ' || str[f] == '\t' || str[f] == '\n')
		{
			f++;
			if (str[f] >= 'a' && str[f] <= 'z')
				str[f] = str[f] - 32;
		}
		else
		{
			if (str[f] >= 'A' && str[f] <= 'Z')
				str[f] = str[f] + 32;
		}
		f++;
	}
	return (str);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = " piScine, thE, PiScInE ";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/