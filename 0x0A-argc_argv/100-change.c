#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cash;
	int i = 0;
	int result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = atoi(argv[i + 1]);
	result = 0;

	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < 5 && cash >= 0; i++)
	{
		while (cash >= coins[i])
		{
			result++;
			cash -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
/* in essence what this program is about finding*/
/* how many times the given numbers(coin values)*/
/* would divide the input value of cash by the individual*/

