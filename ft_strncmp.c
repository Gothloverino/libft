/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:15:38 by asignoro          #+#    #+#             */
/*   Updated: 2024/12/04 11:18:05 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& s1[i] && s2[i] && i < n)
	{
		i++;
	}
	if ((s1[i] == '\0' && s2[i] == '\0') || (i == n))
		i--;
	if ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		return (0);
	}
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
	{
		return (1);
	}
	else
		return (-1);
}
