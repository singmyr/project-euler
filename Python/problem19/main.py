# You are given the following information,
# but you may prefer to do some research for yourself.
# 1 Jan 1900 was a Monday.
# Thirty days has September,
# April, June and November.
# All the rest have thirty-one,
# Saving February alone,
# Which has twenty-eight, rain or shine.
# And on leap years, twenty-nine.
# A leap year occurs on any year evenly divisible by 4, but not on a century
# unless it is divisible by 400.
# How many Sundays fell on the first of the month during the twentieth century
# (1 Jan 1901 to 31 Dec 2000)?

months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


def main():
    year = 1901
    day = 5
    month = 0

    targetYear = 2000
    targetMonth = 11
    targetDay = 31

    sum = 0

    while year <= targetYear and month <= targetMonth and day <= targetDay:
        day += 7
        daysInMonth = (months[month] if month != 1 or not isLeapYear(year) else 29)
        if day > daysInMonth:
            day -= daysInMonth
            month += 1
            if month > 11:
                year += 1
                month = 0
            if day == 1:
                sum += 1

    print(sum)


def isLeapYear(year):
    return True if (year % 4 == 0 and (year % 100 > 0 or (year % 100 == 0 and year % 400 == 0))) else False


if __name__ == "__main__":
    main()
