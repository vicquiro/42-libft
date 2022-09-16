/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:53:44 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/16 15:47:27 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			ret = ((char *)s + i);
		i++;
	}
	return (ret);

}
