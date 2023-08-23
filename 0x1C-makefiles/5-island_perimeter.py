#!/usr/bin/python3
"""This is an island programme"""


def island_perimeter(grid):
    """The perimeter will be returned

    
    """
    side = len(grid[0])
    top_side = len(grid)
    corners = 0
    capacity = 0

    for initial in range(top_side):
        for join_num in range(side):
            if grid[initial][join_num] == 1:
                capacity += 1
                if (j > 0 and grid[initial][join_num - 1] == 1):
                    corners += 1
                if (i > 0 and grid[initial - 1][join_num] == 1):
                    corners += 1
    return capacity * 4 - corners * 2
