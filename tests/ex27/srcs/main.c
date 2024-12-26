/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:26:58 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/20 11:27:00 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
