# The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.
# Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

from functools import reduce


def main():
    print(str(reduce((lambda x, y: x + y), [pow(x, x) for x in range(1, 1001)]))[-10:])


if __name__ == "__main__":
    main()
