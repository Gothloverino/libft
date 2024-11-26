/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:56:47 by asignoro          #+#    #+#             */
/*   Updated: 2024/11/26 11:15:54 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
    void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}