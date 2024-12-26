/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:13:37 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/26 15:13:43 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief Computes the factorial of a number recursively.
 * 
 * If the number is 0 or 1, returns 1 (base case). 
 * For n > 1, returns n * factorial(n-1).
 *
 * @param n The number to compute the factorial for.
 * @return The factorial of the given number.
 */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
