/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:56:59 by asignoro          #+#    #+#             */
/*   Updated: 2024/11/26 10:57:00 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }   
    else
    {
        return (0);
    } 
}