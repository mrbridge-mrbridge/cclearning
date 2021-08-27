#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h"

/*
 * main - argc, argv
 *
 * Return: 0
 */

int main(int argc, char**argv)
{
	char *cmd;

	do
	{
		print_prompt1();

		cmd = read_cmd();

		if(!cmd)
		{
			exit(EXIT_STATUS);
		}

		if(cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}

		if(strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		printf("%s\n", cmd);
		free(cmd);
	} while (1);
	exit(EXIT_SUCCESS);
}
