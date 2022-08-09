#include "shell.h"

/**
 * path_cmd -  Search In $PATH For Excutable Command
 * @cmd: Parsed Input
 * Return: 1  Failure  0  Success.
 */
int path_cmd(char **cmd)
{
	char *path, *value, *cmd_path;
	struct stat buf;

	path = _getenv("PATH");
	value = strtok(path, ":");
	while (value != NULL)
	{
		cmd_path = build(*cmd, value);
		if (stat(cmd_path, &buf) == 0)
		{
			*cmd = _strdup(cmd_path);
			free(cmd_path);
			free(path);
			return (0);
		}
		free(cmd_path);
		value = strtok(NULL, ":");
	}
	free(path);

	return (1);
}
