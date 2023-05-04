#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: a pointer to a string of 0s and 1s
 * Return: the converted number, or 
 * 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return (0);

    unsigned int number = 0;
    const char *p = b;

    while (*p != '\0')
    {
        if (*p != '0' && *p != '1')
            return (0);

        number = (number << 1) + (*p - '0');
        p++;
    }

    return (number);
}

