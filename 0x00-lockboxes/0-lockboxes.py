#!/usr/bin/python3

"""
Function that determines if all the boxes can be opened.
"""


def canUnlockAll(boxes):
    """
    Return True if all boxes can be opened, else return False
    boxes is a list of lists
    """
    new_l = [0]

    for i in new_l:  # Search indexes in new_list that will be return
        for j in boxes[i]:
            if j not in new_l and j < len(boxes):
                if isinstance(j, int) and j >= 0:
                    new_l.append(j)
    if (len(new_l) == len(boxes)):
        return True
    else:
        return False
