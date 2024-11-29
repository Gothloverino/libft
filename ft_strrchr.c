#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;
    int v;
    
    i = 0;
    v = 0;
    while (s[i] != '\0') {
        if (s[i] == c) {
            j = i;
            v++;
        }
        i++;
    }
    if(v > 0)
    {
       return (char *)&s[j];
    }
    else
    {
    return NULL;
    }
}