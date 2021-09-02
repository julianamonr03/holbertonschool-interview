#!/usr/bin/python3
""" Script that reads stdin line by line and computes metrics """

import sys


def stats(size, counter_for_codes):
    """ Prints the compute metric """

    print("File size: {:d}".format(size))
    for k, v in sorted(counter_for_codes.items()):
        print("{}: {}".format(k, v))


counter_for_codes = {}
counter = 0
size = 0
status = ["200", "301", "400", "401", "403", "404", "405", "500"]

string = "GET /projects/260 HTTP/1.1"

try:
    for line in sys.stdin:
        if string in line:
            split = line.split(' ')
            if len(split) < 4:
                continue
            try:
                size += int(split[-1])
            except Exception:
                continue

            comand = split[-2]

            if comand in status:
                if comand in counter_for_codes.keys():
                    counter_for_codes[comand] += 1
                else:
                    counter_for_codes[comand] = 1
        counter += 1
        if counter % 10 == 0:
            stats(size, counter_for_codes)
    else:
        stats(size, counter_for_codes)

except KeyboardInterrupt:
    stats(size, counter_for_codes)
