/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:29:39 by asignoro          #+#    #+#             */
/*   Updated: 2024/12/03 15:41:31 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t len_init;

    i = 0;
    j = ft_strlen(dst);
    len_init = j;

    if (size <= j)
        return (size + ft_strlen(src));

    while (src[i] != '\0' && j < size - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }

    if (j < size)
        dst[j] = '\0';

    return (len_init + ft_strlen(src));
}