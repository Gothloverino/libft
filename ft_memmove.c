/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:57:11 by asignoro          #+#    #+#             */
/*   Updated: 2024/11/26 11:37:02 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

       #include <string.h>

       void *ft_memmove(void *dest, const void *src, size_t n)
       {
        size_t i;

        if (dest > src)
        {
            i = n;
            while(i > 0)
            {
                i--;
                ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            }
        }
        else
        {
            ft_memcpy(dest, src, n);
        }
        return (dest);
       }
