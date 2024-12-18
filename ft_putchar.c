/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:31:57 by cbolanos          #+#    #+#             */
/*   Updated: 2024/08/13 10:32:03 by cbolanos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Función que realiza una prueba
void realizarTest() {
    printf("Test realizado con éxito!\n");
}

int main() {
    printf("Inicio del test...\n");
    
    // Llamada a la función de prueba
    realizarTest();
    
    printf("Fin del test.\n");
    return 0;
}

