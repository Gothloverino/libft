       #include <string.h>
       #include <stdlib.h>

       char *ft_strdup(const char *s) {
           char *dup = (char *)malloc(strlen(s) + 1);
           if (dup != NULL) {
               strcpy(dup, s);
           }
           return dup;
       }