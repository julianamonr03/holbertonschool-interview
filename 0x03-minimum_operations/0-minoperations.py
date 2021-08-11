#!/usr/bin/python3
"""
Method that calculates the fewest number of operations needed to result in exactly n H characters in the file.
"""


def is_prime(n):
    """ Selecting number if is prime """

    if n == 2 or n == 3:
        return True

    if n < 2 or n % 2 == 0:
        return False

    if n < 9:
        return True

    if n % 3 == 0:
        return False

    r = int(n ** 0.5)

    f = 5

    while f <= r:
        if n % f == 0:
            return False

        if n % (f+2) == 0:
            return False

        f += 6

    return True


def minOperations(n):
    """ Minimun operations """

    res = n
    i = 0

    while res > 1:
        if is_prime(res):
            i += res
            res = int(res / res)

        else:
            div = min_divisor(res)
            i += div
            res = int(res / div)

    return int(i)


def min_divisor(num):
    """ Function 2 """

    for i in range(2, num + 1):
        if num % i == 0:
            return i
