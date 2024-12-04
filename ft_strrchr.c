#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;
	int v;
	
	i = 0;
	v = 0;
	while (s[i] != '\0') {
		if (s[i] == (unsigned char)c) 
		{
			j = i;
			v++;
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	if (v > 0)
	{
	   return (char *)&s[j];
	}
	else
	{
	return NULL;
	}
}