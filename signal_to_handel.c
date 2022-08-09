#include "shell.h"

/**
 * signal_to_handel - Function that handle C
 * @sig: Captured Signal
 * Return: Void
 */

void signal_to_handel(int sig)
{
	if (sig == SIGINT)
	{
		PRINTER("\n$ ");
	}
}
