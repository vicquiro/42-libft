/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:27:14 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/16 18:28:42 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	check_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);

}


int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	res = 0;
	neg = 0;
	i = check_spaces(str);
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		res = res * (-1);
	return (res);
}
