#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc >= 3)
	{
		i++;
		printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);

}
