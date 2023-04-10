#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int sign = 1;
        int result = 0;
	int  i = 0;
	
	if (s[i] == '-')
	{
        
		sign = -1;
		i++;
	}

    
	while (s[i] != '\0')
   
       	{
       
	       	if (s[i] < '0' || s[i] > '9')
            
			return (0);

		result = result * 10 + (s[i] - '0');
        
		i++;
    
	}

	return (sign * result);
}

