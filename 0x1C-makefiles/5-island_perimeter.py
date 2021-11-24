#!/usr/bin/python3


def try_the_edges(i, j, grid):
    """checks perimeter of individual cells for water (0)"""
    count = 0
    if i == 0 or grid[i - 1][j] == 0:
        count += 1
    if i == len(grid) - 1 or grid[i + 1][j] == 0:
        count += 1
    if j == 0 or grid[r][j - 1] == 0:
        count += 1
    if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
        count += 1

    return count


def island_perimeter(grid):
    """perimeter of island (1) surrounded by water (0)"""
    perimeter = 0

    if not grid:
        return perimeter
    if not isinstance(grid, list):
        return perimeter
    rows = len(grid)
    if rows < 1:
        return perimeter
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += try_the_edges(i, j, grid)

    return perimeter


if __name__ == '__main__':
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    grid = [
        [1, 1],
        [1, 1]
    ]
    print(island_perimeter(grid))
