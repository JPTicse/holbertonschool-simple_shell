#include "shell.h"

/**
 * _isalpha - Check if Alphabtic
 *@c: Character
 * Return: 1 If True 0 If Not
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
else
{
return (0);
}
}
