#include "shell.h"

/**
 * _getenv - gets the value of enviroment variable by name
 * @name: environment variable name
 * Return: the value of the environment variable else NULL
 */

char *_getenv(char *name)
{
	size_t nl, vl;
	char *value;
	int i, x, j;

	nl = _strlen(name);/**stores the size of the string*/
	for (i = 0; environ[i]; i++)
		/**compares both strings taking into account the size nl*/
	{
		if (_strncmp(name, environ[i], nl) == 0)
			/**creates a condition if equal to 0*/
		{
			vl = _strlen(environ[i]) - nl;
					value = malloc(sizeof(char) * vl);
					/**if there is nothing, the memory is freed an error message is thrown*/
					if (!value)
					{
					free(value);
					perror("unable to alloc");
					return (NULL);
					}
					/**it returns the value character by character and adds a '\0'*/
					j = 0;
					for (x = nl + 1; environ[i][x]; x++, j++)
					{
					value[j] = environ[i][x];
					}
					value[j] = '\0';
					return (value);
					}
					}
					return (NULL);
					}
