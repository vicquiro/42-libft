/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:38:03 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/30 18:38:14 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	count_words(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	while (s[i] != 0 && c != 0)
	{
		while (s[i] == c)
		{
			if (k == 0)
			{
				k = 1;
				j++;
			}
			i++;
		}
		k = 0;
		i++;
	}
	if (s[i] == 0)
		return (j + 1);
	return (j);
}

int	word_len(char const *s, char c, int *indice)
{
	int	i;

	i = 0;
	while (s[*indice] == c)
		*indice = *indice + 1;
	while (s[*indice] != c && s[*indice] != 0)
	{
		*indice = *indice + 1;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	int		i;
	int		j;
	int		k;
	int		tam;

	j = 0;
	i = 0;
	s1 = (char **)malloc(sizeof(char) * (count_words(s, c)));
	if (!s1)
		return (0);
	while (j != count_words(s, c))
	{
		tam = word_len(s, c, &i);
		k = 0;
		s1[j] = (char *)malloc(sizeof(char) * tam);
		while (tam)
		{
			s1[j][k++] = s[i - tam];
			tam--;
		}
		s1[j][k] = 0;
		j++;
	}
	return (s1);
}