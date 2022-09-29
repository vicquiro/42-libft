/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:00:58 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/29 13:01:02 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t total_len;
    char *substring;
    int i;

    i = 0;
    if (!s)
        return (0);
    if (start > ft_strlen(s))
        len = 0;
    total_len = ft_strlen(s);

    substring = malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (NULL);
    while (start < (start + len) && (size_t)i < len)
    {
        substring[i] = s[start];
        start++;
        i++;
    }

    substring[i] = '\0';
    return (substring);
}

// int main(void)
// {
//     char *str = "01234";
//     size_t size = 10;

//     ft_substr(str, 10, size);
//     return (0);
// }
