#include "shell.h"

/**
 * print_prompt - initialize shell
 * Return: Nothing
 */

void print_prompt(void)
{
	char *buf = ":) ";

	write(0, buf, _strlen(buf));
}