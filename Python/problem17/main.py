"""
If the numbers 1 to 5 are written out in words: one, two, three, four, five,
then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive
were written out in words, how many letters would be used?
NOTE: Do not count spaces or hyphens.
For example, 342 (three hundred and forty-two) contains 23 letters and
115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance
with British usage.
"""

LANGUAGE_DEFINITIONS = {
    0: {
        0: "zero",
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen"
    },
    1: {
        2: "twenty",
        3: "thirty",
        4: "forty",
        5: "fifty",
        6: "sixty",
        7: "seventy",
        8: "eighty",
        9: "ninety"
    },
    2: {i:(lambda i=i: LANGUAGE_DEFINITIONS[0][i]+ "hundred") for i in range(10)},
    3: {i:(lambda i=i: LANGUAGE_DEFINITIONS[0][i]+ "thousand") for i in range(10)}
}

SUM = 0
for i in range(1, 1001):
    # Check if we should add 3 digits for "and"
    if i > 100 and i % 100 > 0:
        SUM += 3
    i = str(i)
    l = list(i)[::-1]
    for k, v in enumerate(l):
        v = int(v)
        if v == 0:
            continue
        if k == 0 and len(i) > 1:
            if int(l[k+1]) == 1:
                continue
        if k == 1 and v < 2:
            c = LANGUAGE_DEFINITIONS[0][(v*10) + int(l[k-1])]
        else:
            c = LANGUAGE_DEFINITIONS[k][v]
        SUM += len(c() if callable(c) else c)
print(SUM)
