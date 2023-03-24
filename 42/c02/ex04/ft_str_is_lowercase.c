/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:39:13 by coder             #+#    #+#             */
/*   Updated: 2023/03/07 23:14:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if ((str[f] <= 'z') && (str[f] >= 'a'))
		f++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	letter;
	char	y[] = "abc";
	letter = ft_str_is_lowercase(y);
	printf("%d\n", letter);
}
*/
