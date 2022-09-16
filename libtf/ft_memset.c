/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:47:07 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/14 15:31:57 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, t_size_t len)
{
	unsigned char	*a;
	t_size_t		i;

	i = 0;
	a = (unsigned char *) b;
	while (i < len)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
