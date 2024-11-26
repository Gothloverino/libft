/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:57:07 by asignoro          #+#    #+#             */
/*   Updated: 2024/11/26 11:55:47 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

       #include <string.h>

       void *ft_memcpy(void *dest, const void *src, size_t n)
       {
        size_t i;

        if (dest != NULL || src != NULL)
        {
            i = 0;
            while(i < n)
            {
                ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
                i++;
            }
        }
        return (dest);
       }