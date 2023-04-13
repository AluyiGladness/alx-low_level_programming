#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates grid
 * @width: array width
 * @height: array height
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int j;
	int p;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = (int **)malloc(sizeof(int *) * height);
	if (k == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		k[j] = (int *)malloc(sizeof(int) * width);
		if (k[j] == NULL)
		{
			for (p = 0; p < j; p++)
			{
				free(k[p]);
			}
			free(k);
		}
	}

	for (j = 0; j < height; j++)
		for (p = 0; p < width; p++)
			k[j][p] = 0;

	return (k);
}
