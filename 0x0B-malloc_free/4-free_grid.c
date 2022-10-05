#include "main.h"
#include <stdlib.h>

/**
* free_grid - function frees a 2-dimensional
* array of integers
* @grid: 2-dimensional array of integers to be freed
* @height: height of grid
*
* Return: always 0
*/

void free_grid(int **grid, int height)
{
	height--;
	while(height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}

