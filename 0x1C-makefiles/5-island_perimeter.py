#!/usr/bin/python3
"""Technical Interview Prep"""


def island_perimeter(grid):
    """Checks perimeter"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0 or None:
                    count += 1
                if grid[i + 1][j] == 0 or None:
                    count += 1
                if grid[i][j - 1] == 0 or None:
                    count += 1
                if grid[i][j + 1] == 0 or None:
                    count += 1
    return count
