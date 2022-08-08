#include "shell.h"
/*
 * _atoi - convert to a int
 * @s: string
 * Return: str converted to int
 */
int _atoi(char *s)
{
int i, j, n, x;

	i = n = 0;
	x = 1;
    /**While is not a number and not \0*/
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0')) 
	{
        /**If the "number" in str(s) is negative*/
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	j = i;
    /**Algorithm to convert str(s) in a int*/
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + x * ((s[j]) - '0');
		j++;
	}
	return (n);
}