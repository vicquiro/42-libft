#include "libft.h"
// #include <stdio.h>
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t total_len;
    char *substring;
    int i;

    i = 0;
    total_len = ft_strlen(s);
    if (((start + len) > total_len))
        return (NULL);
    substring = malloc(sizeof(char) * (len + 1));
    if (!substring || !s)
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
//     char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;

//     strsub = ft_substr(str, 7, 10);
//     printf("%s\n",strsub);
//     return (0);
// }

