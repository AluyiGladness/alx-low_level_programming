#include <stdio.h>
#include "main.h"
 /**
 * main - prints all the arguments given by the user
 * @argc: argument count of programme
 * @argv: this is the vector of the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

