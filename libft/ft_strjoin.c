#include "libft.h"
// s1: La primera string.
// s2: La string a añadir a ’s1’.
// Valor devuelto:  La nueva string.
//                  NULL si falla la reserva de memoria

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  	len_out;
    size_t		i;
	size_t		j;
	char    	*str_out;

	i = 0;
	j = 0;
    len_out = ft_strlen(s1) + ft_strlen(s2);
    str_out = malloc(sizeof(char) * (len_out + 1));
    if (!str_out)
	{
        return (0);
	}
	while (s1[i] != '\0' && j < len_out)
	{
		str_out[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0' && j < len_out)
	{
		str_out[j] = s2[i];
		i++;
		j++;
	}
	str_out[j] = '\0';
	return (str_out);
}