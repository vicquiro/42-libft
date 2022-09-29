#include "libft.h"
// A cada carácter de la string ’s’, aplica la
// función ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y el propio carácter. Genera
// una nueva string con el resultado del uso sucesivo
// de ’f’

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int     i;
    char    *str_out;

    
    if (!s || !f)
		  return (0);
    str_out = malloc((size_t)ft_strlen((char*)s) + 1);
    if(!str_out)
      return (0);
    i = 0;
    while (s[i])
    {
        str_out[i] = f(i,s[i]);
        i++;
    }
    str_out[i] = '\0';
    return (str_out);
}
