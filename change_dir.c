#include "shell.h"

/**
 * change_dir - Change Dirctorie
 * @cmd: Parsed Command
 * @er: Statue Last Command Excuted
 * Return: 0 Succes 1 Failed (For Old Pwd Always 0 Case No Old PWD)
 */
int change_dir(char **cmd, __attribute__((unused))int er)
{
	int value = -1;
	char cwd[PATH_MAX];

	/**Case only cd*/
	if (cmd[1] == NULL)
		value = chdir(getenv("HOME"));
	/**Case the last directory*/
	else if (_strcmp(cmd[1], "-") == 0)
	{
		value = chdir(getenv("OLDPWD"));
	}
	else
	/**Any other cd case using argument given*/
		value = chdir(cmd[1]);

	if (value == -1)
	{
		perror("hsh");
		return (-1);
	}
	/**In case the commands works reset the OLDPWD*/
	else if (value != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}
