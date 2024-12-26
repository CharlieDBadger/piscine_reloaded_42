/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:30:12 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/20 11:30:16 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

void	ft_putchar(char c, int descriptor)
{
	write(descriptor, &c, 1);
}

void	ft_putstr(char *str, int descriptor)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], descriptor);
		i++;
	}
}

#endif
