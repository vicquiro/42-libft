/*
Descripción:
		 Utilizando malloc(3), genera una string que
		represente el valor entero recibido como argumento.
		Los números negativos tienen que gestionarse.

Valor devuelto:
			 La string que represente el número.
			NULL si falla la reserva de memoria.
*/

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static char	write_nbr(int nbr)
{
	unsigned int	num;

	num = nbr;
	if (num == 0)
		return (0 + '0');
	if (num > 0)
	{
		write_nbr(num / 10);
		num = num % 10;
	}
	return (num + '0');
}

static size_t	get_lenght(int nbr)
{
	unsigned int	num;
	size_t			len;

	len = 0;
	if (nbr < 0)
	{
		num = (unsigned int)-nbr;
		len++;
	}
	else
		num = (unsigned int)nbr;
	while (num >= 10)
	{
		num = num / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	size_t			len;
	char			*result;
	int				i;

	i = 0;
	len = get_lenght(n);
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (0);
	if (n < 0)
	{
		number = (unsigned int)-n;
		result[0] = '-';
		i++;
	}
	else
		number = (unsigned int)n;
	while (i < (int)len)
	{
		//printf("result[%d - %d]\n",(int)len, i);
		result[(int)len - i] = write_nbr(number);
		number = number / 10;
		i++;
	}
	result[len] = '\0';
	return (result);
}

// int main(void)
// {
// 	char *s;
// 	s = ft_itoa(INT_MAX); 
// 	//s = ft_itoa(INT_MIN);
// 	printf("%s\n",s);
// 	return (0);
// }