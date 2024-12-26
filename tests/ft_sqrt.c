/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:43:39 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/18 19:45:24 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (guess * guess < nb)
	{
		guess++;
	}
	if (guess * guess == nb)
	{
		return (guess);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int	number;
	int	result;

	number = 16;
	result = ft_sqrt(number);
	if (result != 0)
	{
		printf("La raíz cuadrada exacta de %d es %d\n", number, result);
	}
	else
	{
		printf("El número %d no tiene una raíz cuadrada exacta\n", number);
	}
	return (0);
}
