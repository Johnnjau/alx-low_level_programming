#!/usr/bin/python3


"""
Defines a function for calculating the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island defined in the grid.

    The grid is represented by a list of lists of integers, where:
    0 represents a water zone
    1 represents a land zone

    Args:
        grid (list): A list of lists representing the island.

    Returns:
        The perimeter of the island.
    """

    rows = len(grid)
    cols = len(grid[0])
    total_edges = 0
    total_land = 0
    size = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                total_land += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    total_edges += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    total_edges += 1

    return size * 4 - total_edges * 2
