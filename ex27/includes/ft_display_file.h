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
#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 1024

int	open_file(char *filepath)
{
	int	fd;

	fd = open(filepath, O_RDONLY);
	return (fd);
}

void	read_file(int fd)
{
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
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

#endif
