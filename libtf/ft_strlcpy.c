/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:56:39 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/14 17:01:04 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize)
{	
	t_size_t	i;

	i = 0;
	while (src [i] != 0 && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (i != 0)
		dst [i] = '\0';
	return (ft_strlen(src));
}
