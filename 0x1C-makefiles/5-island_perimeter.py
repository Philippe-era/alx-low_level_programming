#!/usr/bin/python3
"""WILL RETURN THE PARAMETER OF THE ISLAND AT HAND"""


def island_perimeter(grid):
    """THIS WILL GIVE YOU THE PERIMETER OF THE ISLAND
    Args:
        grid (list): INTEGERS WILL BE RETURNED 
    Returns:
        Proper measurement of the island
    """
  
    corner = 0
    capacity_island = 0
    width_perimeter = len(grid[0])
    height_perimeter = len(grid)

    for initial in range(height_perimeter):
        for join_numbers in range(width_perimeter):
            if grid[initial][join_numbers] == 1:
                capacity += 1
                if (join_numbers > 0 and grid[initial][join_numbers - 1] == 1):
                    corner += 1
                if (initial > 0 and grid[initial - 1][join_numbers] == 1):
                    corner += 1
    return capacity * 4 - corner * 2

