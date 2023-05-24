#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter island described in grid"""

    per = 0
    row = len(grid)
    col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if i == 0 or grid[i - 1][j] != 1:
                per += 1
            if j == 0 or grid[i][j - 1] != 1:
                per += 1
            if j == width or grid[i][j + 1] != 1:
                per += 1
            if i == length or grid[i + 1][j] != 1:
                per += 1
    return per
