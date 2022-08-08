
#include "shell.h"

/**
* _getline - Read The Input By User From Stdin
* Return: Input
*/
char *_getline()
{
int i, buffsize = BUFSIZE, rd;
char c = 0;
char *buff = malloc(buffsize);

	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}

	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);/**clear input buffer*/
		rd = read(STDIN_FILENO, &c, 1);/**Store the STDIN in buffer(c)*/
		if (rd == 0) /**Check for failure*/
		{
			free(buff);
			exit(EXIT_SUCCESS);
		}
		buff[i] = c; /**Getting char in buffer*/
		if (buff[0] == '\n')
		{
			free(buff);
			return ("\0");
		}
		if (i >= buffsize)
		{
			buff = reallocarray(buff, buffsize, buffsize + 1);
			if (buff == NULL)
			{
				return (NULL);
			}
		}
	}
	buff[i] = '\0'; /**Adding las null value to str*/
	hashtag_handle(buff);/**Function to skip everything after an #*/
	return (buff);
}