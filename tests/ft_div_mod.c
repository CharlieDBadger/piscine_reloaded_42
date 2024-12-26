/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:14:07 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/18 18:23:52 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	number_a;
	int	number_b;
	int	div_pointer;
	int	mod_pointer;

	number_a = 10;
	number_b = 5;
	ft_div_mod(number_a, number_b, &div_pointer, &mod_pointer);
	printf("Cociente: %d, Residuo: %d\n", div_pointer, mod_pointer);
	return (0);
}
