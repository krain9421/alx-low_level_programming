#include "main.h"
#include <stdlib.h>

/*
* alloc_grid - create a matrix using malloc
* @width: width of matrix
* @height: height of the matrix
*
* Return: a pointer or null
*/

int **alloc_grid(int width, int height)
{
	int **matrix;
	int h = 0;
	int w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	while (h < height)
	{
		matrix[h] = malloc(sizeof(int) * width);
		/* Check if malloc returns NULL */
		if (matrix[h] == NULL)
		{
			while (h >= 0)
			{
				free(matrix[h]);
				h--;
			}
			free(matrix);
			return (NULL);
		}

		w = 0;
		while (w < width)
		{
			/* Initialize each member to 0 */
			matrix[h][w] = 0;
			w++;
		}
		h++;
	}
	return (matrix);
}

