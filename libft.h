/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:45:21 by asignoro          #+#    #+#             */
/*   Updated: 2024/11/26 15:12:19 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int         ft_isalpha(int c);
int	        ft_isdigit(int c);
int         ft_isalnum(int c);
int	        ft_isascii(int c);
int         ft_isprint(int c);
int         ft_strlen(const char *c);
void        *ft_memset(void *s, int c, size_t n);
void        ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dest, const void *src, size_t n);
void        *ft_memmove(void *dest, const void *src, size_t n);
size_t      ft_strlcpy(char *dst, const char *src, size_t size);
size_t      ft_strlcat(char *dst, const char *src, size_t size);


#endif
