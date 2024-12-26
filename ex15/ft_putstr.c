/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 18:47:40 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/23 18:47:42 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

/*
 * ft_putstr - Outputs a string to the standard output.
 * @str: The string to be printed.
 *
 * This function takes a string as input and writes each character to
 * the standard output using the write function, until it reaches the
 * null terminator ('\0') which marks the end of the string.
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
