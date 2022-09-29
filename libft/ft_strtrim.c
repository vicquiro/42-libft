/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:15:57 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/29 13:11:02 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// Parámetros  s1: La string que debe ser recortada.
//             set: Los caracteres a eliminar de la string.

// Valor devuelto: La string recortada.
//                 NULL si falla la reserva de memoria.

// Descripción: Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

static int counter_chars(char const *s1, char const *set)
{
    int counter;
    int i;
    int j;

    counter = 0;
    i = 0;
    while(set[i] != '\0')
    {
        j = 0;
        while (s1[j] != '\0')
        {
            if(set[i] == s1[j])
                counter++;
            j++;
        }
        i++;
    }
    return (counter);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    int counter;
    int in_str;    
    char *str_out;

    counter = counter_chars(s1, set);
    
    if (!s1 || !set)
        return (0);
    str_out = ft_calloc((ft_strlen(s1) - counter) + 1, sizeof(char));
    if(!str_out)
        return (0);
    i = 0;
    k = 0;    
    while (s1[i] != '\0')
    {
        j = 0;
        in_str = 0;
        while (set[j] != '\0')
        {
            if (s1[i] == set[j])
                in_str = 1;
            j++;       
        }
        if(!in_str && k < counter)
        {
            str_out[k] = s1[i];
            k++;
        }
        i++;
    }
    return (str_out);
}
