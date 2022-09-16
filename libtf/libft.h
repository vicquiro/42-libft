/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:06:12 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/16 16:14:25 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); // OK
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);// ** **
size_t			ft_strlen(const char *s); //OK
void			*ft_memset(void *b, int c, size_t len); //OK
void			*ft_memcpy(void *dst, const void *src, size_t n); //OK
void			*ft_memchr(const void *s, int c, size_t n); // **
int				ft_memcmp(const void *s1, const void *s2, size_t n); // OK

//void			*memmove(void *dst, const void *src, size_t len);
void			ft_bzero(void *s, size_t n); // OK
char			*ft_strchr(const char *s, int c); // OK
char			*ft_strrchr(const char *s, int c); // **
int				ft_isalpha(int c); // OK
int				ft_isdigit(int c); // *
int				ft_isalnum(int c); // * 
int				ft_isascii(int c); // OK
int				ft_isprint(int c); // OK
int				ft_strncmp(char *s1, char *s2, unsigned int n); // OK
int				ft_tolower(int c); // OK 
int				ft_toupper(int c); // OK


#endif