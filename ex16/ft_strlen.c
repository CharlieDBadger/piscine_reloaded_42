/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:44:46 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/23 18:44:49 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_strlen - Calculates the length of a string.
 * @str: The string whose length is to be measured.
 *
 * This function iterates through the string until it encounters the
 * null terminator ('\0'). It returns the total number of characters
 * in the string, excluding the null terminator.
 *
 * Return: The length of the string (number of characters).
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
