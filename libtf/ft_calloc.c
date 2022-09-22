/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:33:04 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/22 17:19:39 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_len;
	void	*dst;

	total_len = count * size;
	dst = malloc(total_len);
	if (!dst || total_len / size != count)
		return (0);
	ft_bzero(dst, total_len);
	return (dst);
}
