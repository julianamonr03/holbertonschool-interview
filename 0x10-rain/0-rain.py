#!/usr/bin/python3
""" Python module """


def rain(walls):
    """ Function to calculate how much it rains """
    rain = 0
    for i in range(1, len(walls) - 1):
        before = walls[i]
        for j in range(i):
            before = max(before, walls[j])
        after = walls[i]
        for j in range(i + 1, len(walls)):
            after = max(after, walls[j])
        rain = rain + (min(before, after) - walls[i])
    return rain
