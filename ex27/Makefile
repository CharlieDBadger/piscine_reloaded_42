# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 10:15:07 by cbolanos          #+#    #+#              #
#    Updated: 2024/12/20 10:19:35 by cbolanos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME = ft_display_file

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Directorios
SRCDIR = srcs
INCDIR = includes

# Archivos fuente
SRC = main.c
SRCS = $(addprefix $(SRCDIR)/, $(SRC))

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Regla principal
all: $(NAME)

# Enlazar los archivos objeto en el ejecutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Regla para compilar cada archivo fuente en su objeto
$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/libft.h $(INCDIR)/ft_display_file.h
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Ejecutar Valgrind
valgrind: $(NAME)
	valgrind --leak-check=full --track-fds=yes ./$(NAME) archivo.txt

# Limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Limpiar archivos objeto y el ejecutable
fclean: clean
	rm -f $(NAME)

# Reconstruir desde cero
re: fclean all


