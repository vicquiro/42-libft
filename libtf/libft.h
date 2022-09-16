/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:06:12 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/14 17:38:13 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size_t;

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
t_size_t		ft_strlcpy(char *dst, const char *src, t_size_t dstsize);
t_size_t		ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, t_size_t len);
void			*ft_memcpy(void *dst, const void *src, t_size_t n);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			ft_bzero(void *s, t_size_t n);

#endif