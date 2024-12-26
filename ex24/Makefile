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

# Nombre de la biblioteca
NAME = libft.a

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorios
SRCDIR = srcs
INCDIR = includes

# Archivos fuente y objetos
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = $(SRC:.c=.o)

# Prefijo del directorio de origen
SRCS = $(addprefix $(SRCDIR)/, $$(SRC))
OBJS = $(addprefix $(SRCDIR)/, $(OBJ))

# Regla predeterminada
all: $(NAME)

# Compilar la biblioteca
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilar archivos .c en .o
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(FLAGS) -I $(INCDIR) -c $< -o $@

# Limpiar archivos intermedios
clean:
	rm -f $(OBJS)

# Limpiar todo (incluida la biblioteca)
fclean: clean
	rm -f $(NAME)

# Reconstruir todo
re: fclean all
