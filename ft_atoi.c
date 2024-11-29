    #include <stdlib.h>
    
    int ft_atoi(const char *nptr) {
        int result = 0;
        int sign = 1;
    
        // Skip whitespace
        while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v' || *nptr == '\f' || *nptr == '\r') {
            nptr++;
        }
    
        // Handle optional sign
        if (*nptr == '-' || *nptr == '+') {
            if (*nptr == '-') {
                sign = -1;
            }
            nptr++;
        }
    
        // Convert digits to integer
        while (*nptr >= '0' && *nptr <= '9') {
            result = result * 10 + (*nptr - '0');
            nptr++;
        }
    
        return sign * result;
    }
