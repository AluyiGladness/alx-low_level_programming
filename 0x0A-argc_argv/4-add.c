#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums up argument given with programme
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", count);

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);

	}
	printf("%d\n", sum);
	return (0);

}
