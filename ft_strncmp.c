#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)    
{
        size_t i;
        size_t j;
        size_t y;
        while (i < n)
    {
            i++;
            if(*s1 != '\0')
            {
                j++;
            }
            if(*s2 != '\0')
            {
                y++;
            }
    }
        if(j > y)
            return ( y - j );
                else if ( j < y )
                    return ( j - y );
                        else
                            return (0);
    }


