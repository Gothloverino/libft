/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asignoro <asignoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:14:10 by asignoro          #+#    #+#             */
/*   Updated: 2024/12/04 16:16:07 by asignoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cases(int n, char **ptr, int *minus)
{
	*minus = 0;
	if (n == 0)
	{
		*ptr = ft_strdup("0");
		return (1);
	}
	else if (n == -2147483648)
	{
		*ptr = ft_strdup("-2147483648");
		return (1);
	}
	return (0);
}

int	count(int n)
{
	int		i;
	int		num;
	char	*ptr;

	num = n;
	i = 0;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

void	positive(int len, char *ptr, int *n)
{
	while (len >= 0)
	{
		ptr[len] = *n % 10;
		ptr[len] = ptr[len] + '0';
		*n = *n / 10;
		len--;
	}
}

void	negative(int len, char *ptr, int *n)
{
	while (len > 0)
	{
		ptr[len] = *n % 10;
		ptr[len] = ptr[len] + '0';
		*n = *n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	int		minus;
	char	*ret;

	len = count(n);
	ret = cases(n, &ptr, &minus);
	if (ret)
		return (ptr);
	ptr = malloc(len + 1 + (n < 0));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		ptr[0] = '-';
		len++;
		minus++;
	}
	ptr[len--] = '\0';
	if (!minus)
		positive(len, ptr, &n);
	else
		negative(len, ptr, &n);
	return (ptr);
}

/* int main()
{
	ft_itoa(10);
} */