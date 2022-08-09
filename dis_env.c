#include "shell.h"

/**
 * dis_env - display enviroment variable
 * @cmd: parsed command
 * @er: statue of last command excuted
 * Return: always 0
 */

int dis_env(__attribute__((unused)) char **cmd, __attribute__((unused)) int er)
{
	size_t i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
		len = _strlen(environ[i]);
		write(1, environ[i], len);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
