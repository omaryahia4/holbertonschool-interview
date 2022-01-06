#!usr/bin/python3
""" calculates the fewest number of operations needed"""


def minOperations(n):
    op = 0
    number = 2
    if type(n) is not int:
        return 0
    if n <= 1:
        return op
    while n > 1:
        if n % number == 0:
            op+= number
            n = n / number
        else:
            number += 1
    return(op)

