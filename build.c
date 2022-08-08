#include "shell.h"

/**
 * build - Build Command
 * @token: Excutable Command
 * @value: Directory Containing Command
 *
 * Return: Parsed Full Path Of Command Or NULL Case Failed
 */
char *build(char *token, char *value)
{
	char *cmd;
	size_t len;

	len = _strlen(value) + _strlen(token) + 2;
	cmd = malloc(sizeof(char) * len);
	if (cmd == NULL)
	{
		return (NULL);
	}

	cmd = _strcat(cmd, value);
	cmd = _strcat(cmd, "/");
	cmd = _strcat(cmd, token);

	return (cmd);
}