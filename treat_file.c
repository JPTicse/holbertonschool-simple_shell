#include "shell.h"

/**
 * treat_file - PARSE Check Command Fork Wait Excute in Line of File
 * @line: Line From A File
 * @counter:Error Counter
 * @fp:File Descriptor
 * @argv:Program Name
 * Return : Excute A line void
 */
void treat_file(char *line, int counter, FILE *fp, char **argv)
{
	char **cmd;
	int st = 0;

	cmd = parse_cmd(line);

		if (_strncmp(cmd[0], "exit", 4) == 0)
		{
			exit_bul_for_file(cmd, line, fp);
		}
		else if (check_builtin(cmd) == 0)
		{
			st = handle_builtin(cmd, st);
			free(cmd);
		}
		else
		{
			st = check_cmd(cmd, line, counter, argv);
			free(cmd);
		}
}