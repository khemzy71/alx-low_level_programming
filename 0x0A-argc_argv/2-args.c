#include <stdio.h>
#include "main.h"

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
		printf("%s\n", argv[x++]);

	return (0);
}
