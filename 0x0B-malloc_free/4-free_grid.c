#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2D arr created previously
 * @grid: ptr to arr
 * @height: number of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
