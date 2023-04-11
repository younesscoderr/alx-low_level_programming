#include "main.h"

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
		arr = malloc(h * sizeof(int));

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
					free(arr[i]);
					return (NULL);
				}
			}
		}
		else
		{
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
