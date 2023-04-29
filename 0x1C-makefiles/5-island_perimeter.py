#!/usr/bin/python3
"""Module that finds the perimeter of an island"""


def island_perimeter(grid):
    """Function that returns perimeter of an island"""
    peri = 0

    if grid != []:
        rows = len(grid)
        cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    peri += 1
                if (i + 1) == rows or grid[i + 1][j] == 0:
                    peri += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    peri += 1
                if (j + 1) == cols or grid[i][j + 1] == 0:
                    peri += 1

    return peri
