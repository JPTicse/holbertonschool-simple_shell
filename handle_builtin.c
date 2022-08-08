#include "shell.h"

/**
 * handle_builtin - Handle Builtin Command
 * @cmd: Parsed Command
 * @er:statue of last Excute
 * Return: -1 Fail 0 Succes (Return :Excute Builtin)
 */

int handle_builtin(char **cmd, int er)
{
	 bul_t bil[] = {
		{"cd", change_dir},
		{"env", dis_env},
		{"help", display_help},
		{"echo", echo_bul},
		{"history", history_dis},
		{NULL, NULL}
	};
	int i = 0;

	while ((bil + i)->command)
	{
		if (_strcmp(cmd[0], (bil + i)->command) == 0)
		{
			return ((bil + i)->fun(cmd, er));
		}
		i++;
	}
	return (-1);
}