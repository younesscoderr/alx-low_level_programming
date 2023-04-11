#include "main.h"

void _free_grid(int **arr, int h);
/**
 * alloc_grid -  returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: first array.
 * @height: second array.
 *
 * Return: returns a pointer to a 2 dimensional array of integers,
 * If width or height is 0 or negative, return NULL,
 * and  return NULL on failure.
 *
 */
int **alloc_grid(int width, int height)
{
	int w = width;
	int h = height;
	int **arr = NULL;
	int i, j;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(h * sizeof(int *));
		if (arr != NULL)
		{
			for (i = 0; i < h; i++)
			{
				arr[i] = malloc(w * sizeof(int));
				if (arr[i] != NULL)
				{
					for (j = 0; j < w; j++)
					{
						arr[i][j] = 0;
					}
				}
				else
				{
					_free_grid(arr, i);
					return (NULL);
				}
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (arr);
}

/**
 * _free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @arr: pointer to the grid
 * @h: height of the grid
 *
 */
void _free_grid(int **arr, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
