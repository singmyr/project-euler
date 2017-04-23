# 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
# Find the sum of all numbers which are equal to the sum of
# the factorial of their digits.
# Note: as 1! = 1 and 2! = 2 are not sums they are not included.

from math import factorial


curiousNumbers = set()


def main():
    for x in range(3, 50000):
        sum = 0
        for i in list(str(x)):
            sum += factorial(int(i))
        if int(sum) == x:
            print("Found", x, "->", sum)
            curiousNumbers.add(x)
    print(len(curiousNumbers))


if __name__ == "__main__":
    main()
