/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:00:03 by asignoro          #+#    #+#             */
/*   Updated: 2024/12/07 10:35:03 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int count_strings(char const *s, char c)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			y++;
		}
		i++;
	}
	y++;
	return(y);
}
int strlen_c(char const *s, char c)
{
	int i;
	
	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	return (i);
}
char **ft_split(char const *s, char c)
{
	int ar;
	int i;
	int y;
	int j;
	int len;
	char **t;
	
	i = 0;
	y = 0;
	j = 0;
	ar = count_strings(s, c);
	t = malloc(ar);
	while(j < ar)
	{
		len = strlen_c(s, c);
		t[j] = malloc(len + 1);
		i = 0;
		while (i < len)
		{
			t[j][i] = s[i];
			i++;
		}
		t[j][i] = '\0';
		j++;
	}
	t[j] = NULL;
	return (t);
}
int main ()
{
	char **a;
	int i;
	
	i = 0;
	a = ft_split("cane test ocap", ' ');
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	
}