/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:52:32 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/18 18:04:29 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 20;
	printf("Antes de swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Después de swap: x = %d, y = %d\n", x, y);
	return (0);
}
