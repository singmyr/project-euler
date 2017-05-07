"""
Let d(n) be defined as the sum of proper divisors of n
(numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b,
then a and b are an amicable pair and
each of a and b are called amicable numbers.

For example, the proper divisors of 220 are
1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110;
therefore d(220) = 284.
The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
"""

calculated = dict()


def d(n):
    sum = 1
    maxNum = int((n * .5))
    for i in range(2, maxNum + 1):
        if n % i == 0:
            sum += i
    return sum

SUM = 0
for i in range(1, 10000):
    if i not in calculated:
        a = d(i)
        calculated[i] = a
    else:
        a = calculated[i]

    if a not in calculated:
        b = d(a)
        calculated[a] = b
    else:
        b = calculated[a]
    if b == i and b != a:
        SUM += i

print(SUM)
