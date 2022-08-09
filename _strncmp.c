#include "shell.h"
/**
 * _strncmp - compare amount (n) of characters of two strings
 * @s1: a string
 * @s2: a string
 * @n: amount of characters to compare
 * Return: 1 if the string don't match, otherwise 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
