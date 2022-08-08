#include "shell.h"

/**
 * exit_bul_for_file - Exit Shell Case Of File
 * @line: Line From A File
 * @cmd: Parsed Command
 * @fd:File Descriptor
 * Return : Case Of Exit in A File Line
 */
void exit_bul_for_file(char **cmd, char *line, FILE *fd)
{
	int statue, i = 0;

	if (cmd[1] == NULL)
	{
		free(line);
		free(cmd);
		fclose(fd);
		exit(errno);
	}
	while (cmd[1][i])
	{
		if (_isalpha(cmd[1][i++]) < 0)
		{
			perror("illegal number");
		}
	}
	statue = _atoi(cmd[1]);
	free(line);
	free(cmd);
	fclose(fd);
	exit(statue);
}