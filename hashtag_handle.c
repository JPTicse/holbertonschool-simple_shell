#include "shell.h"

/**
 * hashtag_handle - remove everything after #
 * @buff: input;
 * Return:void
 */
void hashtag_handle(char *buff)
{
	int i;

		for (i = 0; buff[i] != '\0'; i++)
		{
			if (buff[i] == '#')
			{
			buff[i] = '\0';
			break;
			}
	}
}