/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:09:33 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/26 15:09:36 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calculates the factorial of a non-negative integer.
 *
 * The function multiplies all positive integers from 1 to the given number.
 * If the input is 0, the function returns 1 (as 0! is defined to be 1).
 *
 * @param nb The number to calculate the factorial for.
 * @return The factorial of the number, or 0 if the number is negative.
 */
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
