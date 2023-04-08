#include <stdio.h>
#include "main.h"

/**
 * main - it prints its own name which is followed bya new line
 * @argc: number of program arguments
 * @argv: arrays that contain the program arguments.
 * Return: 0
 */


int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
