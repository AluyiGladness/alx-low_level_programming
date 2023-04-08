#include <stdio.h>
#include "main.h"

/**
 * main - it prints its own name which is followed bya new line
 * @argc: number of program arguments
 * @argv: arrays that contain the program arguments.
 * Return: 0
 */


int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);

}
