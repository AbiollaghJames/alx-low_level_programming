#!/usr/bin/python3
""" the perimeter module """


def island_perimeter(grid):
    """Returns perimeter of island in grid"""
    x = 0
    length = len(grid) - 1
    width = len(grid) - 1

    for i, j in enumerate(grid):
        for m, n in enumerate(j):
            if n == 1:
                if i == 0 or grid[i - 1][m] != 1:
                    x += 1

                if m == 0 or grid[i][m - 1] != 1:
                    x += 1

                if m == width or grid[i][m + 1] != 1:
                    x += 1

                if i == length or grid[i + 1][m] != 1:
                    x += 1

    return x
