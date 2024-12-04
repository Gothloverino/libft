#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    int l;
    int i;
    int y;
    i = 0;
    y = 0;
    l = ft_strlen(s1) + ft_strlen(s2);
    s3 = malloc(l + 1);
    if (!s3)
        return (NULL);
    while (i < ft_strlen(s1))
    {
        s3[i] = s1[i];
        i++;
    }
    while (i < l)
    {
        s3[i] = s2[y];
        i++;
        y++;
    }
    s3[i] = '\0';
    return (s3);
}