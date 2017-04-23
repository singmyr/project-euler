# By starting at the top of the triangle below and moving to adjacent numbers
# on the row below, the maximum total from top to bottom is 23.
# 3
# 7 4
# 2 4 6
# 8 5 9 3
# That is, 3 + 7 + 4 + 9 = 23.
# Find the maximum total from top to bottom in triangle.txt
# (right click and 'Save Link/Target As...'), a 15K text file containing
# a triangle with one-hundred rows.

import os


pyramid = []


def main():
    with open(os.path.join(os.path.dirname(__file__), "triangle.txt")) as file:
        for line in file:
            pyramid.append([int(x) for x in line.strip().split(" ")])
    # Create an multidimensional array that contains the max paths.
    maxPath = []
    for i in pyramid:
        maxPath.append([0] * len(i))
    maxPath[len(maxPath) - 1] = pyramid[-1:][0]

    # Start from the bottom (except the last one) and count the max paths.
    for i, row in enumerate(pyramid[:-1][::-1]):
        y = len(pyramid)-i-2
        for x, v in enumerate(row):
            maxPath[y][x] = v + max(maxPath[y + 1][x], maxPath[y + 1][x + 1])
    print(maxPath)


if __name__ == "__main__":
    main()
