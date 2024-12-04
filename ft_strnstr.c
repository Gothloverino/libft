     #include "libft.h"

    char *ft_strnstr(const char *big, const char *little, size_t len) 
    {
         size_t i;
         size_t j;

         if (*little == '\0')
             return (char *)big;

         for (i = 0; i < len && big[i] != '\0'; i++) {
             for (j = 0; i + j < len && big[i + j] == little[j]; j++) {
                 if (little[j + 1] == '\0')
                     return (char *)&big[i];
             }
         }
         return NULL;
     }