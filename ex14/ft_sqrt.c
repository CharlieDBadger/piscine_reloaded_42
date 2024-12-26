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
