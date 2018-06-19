#!/usr/bin/python3
"""Finds the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    Args:
        Grid: A list of integers of 0s (water) and 1s (land)
    """
    island_perimeter = 0
    for col in range(len(grid)):
        for row in range(len(grid[0])):
            if grid[col][row] == 1:
                island_perimeter += 4
                if row < len(grid[0]) - 1:
                    if grid[col][row + 1] == 1:
                        island_perimeter -= 2
                if col < len(grid) - 1:
                    if grid[col + 1][row] == 1:
                        island_perimeter -= 2
    return island_perimeter
