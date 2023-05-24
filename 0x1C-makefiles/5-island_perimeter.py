#!/usr/bin/python3
""" the perimeter module """


def island_perimeter(grid):
    """Returns perimeter of island in grid"""

    per = 0
    length = len(grid)

    if grid != []:
        width = len(grid[0])

    for i in range(length):
        for j in range(width):

            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    per += 1

                if (i + 1) == length or grid[i + 1][j] == 0:
                    per += 1

                if (j - 1) == -1 or grif[i][j - 1] == 0:
                    per += 1

                if (j + 1) == width or grid[i][j + 1] == 0:
                    per += 1

    return per
