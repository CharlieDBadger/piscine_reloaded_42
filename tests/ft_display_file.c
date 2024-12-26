/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:26:49 by cbolanos          #+#    #+#             */
/*   Updated: 2024/12/20 11:26:52 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

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

int	open_file(char *filepath)
{
	int	fd;
	
	fd = open(filepath, O_RDONLY);
	return (fd);
}

void	read_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		write(1, buffer, bytes_read);
	if (bytes_read == -1)
	{
		ft_putstr("\nCannot read file.\n", 2);
	}
}

void	ft_display_file(char *filepath)
{
	int	fd;
	fd = open_file(filepath);
	if (fd == -1)
		ft_putstr("Cannot read file.\n", 2);
	else
	{
		read_file(fd);
		close(fd);
	}
}

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
	return(0);
}
