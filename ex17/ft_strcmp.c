/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 07:13:52 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/20 07:15:57 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
* ft_strcmp - Compares two strings lexicographically.
* @s1: The first string to compare.
* @s2: The second string to compare.
* return: 0 if both strings are equal, 
*	a positive value if the first string is greater and 
*	negative if the second is greater.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
Prints a number with one or more digits, negative or positive.
*//*
void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = ft_strcmp(argv[1], argv[2]);
		ft_putnbr(i);
	}
	return (0);
}
*/
