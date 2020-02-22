#!/usr/bin/python3
"""Technical Interview Prep"""


def island_perimeter(grid):
    """Checks perimeter"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    count += 1
                if i + 1 >= len(grid) or grid[i + 1][j] == 0:
                    count += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    count += 1
                if j + 1 >= len(grid[0]) or grid[i][j + 1] == 0:
                    count += 1
    return count
