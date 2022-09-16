/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:08:46 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/14 15:30:39 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	c;

	i = 0;
	k = ft_strlen(dest);
	c = ft_strlen(src);
	if (size <= k)
		return (size + c);
	while (src[i] != '\0' && (k + i) < (size - 1))
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (k + c);
}
