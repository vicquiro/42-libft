/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkyro <vkyro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:06:12 by vquiroga          #+#    #+#             */
/*   Updated: 2022/09/24 20:51:00 by vkyro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlcat(char *dest, char *src, size_t dstsize);// OK
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);//OK
size_t			ft_strlen(const char *s);//OK
void			*ft_memset(void *b, int c, size_t len);//OK
void			*ft_memcpy(void *dst, const void *src, size_t n);//OK
void			*ft_memchr(const void *s, int c, size_t n);// OK
int				ft_memcmp(const void *s1, const void *s2, size_t n);// OK
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_calloc(size_t count, size_t size);//OK
void			ft_bzero(void *s, size_t n);// OK
char			*ft_strchr(const char *s, int c);// OK
char			*ft_strrchr(const char *s, int c);// OK
char			*ft_strdup(const char *s1);
char			*ft_strnstr(const char *haystack, \
const char *needle, size_t len);
int				ft_atoi(const char *str); // OK
int				ft_isalpha(int c);// OK
int				ft_isdigit(int c);// OK
int				ft_isalnum(int c);// OK 
int				ft_isascii(int c);// OK
int				ft_isprint(int c);// OK
int				ft_strncmp(char *s1, char *s2, unsigned int n);// OK
int				ft_tolower(int c);// OK 
int				ft_toupper(int c);// OK

char            *ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char            *ft_strtrim(char const *s1, char const *set);
void            ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif