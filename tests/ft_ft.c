/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:01:31 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/18 17:08:27 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;
	int	*pointer;

	n = 5;
	pointer = &n;
	ft_ft(pointer);
	printf("Valor de n después de ft_ft: %d\n", n);
	return (0);
}
