import math
def digit_sum(n):
    co = 1
    count = 0
    total = 0
    sqr = 0
    while (n/co) != 0:
        count+=1
        co = co *10
    for i in range(count,0,-1):
        sqr = 10 ** (i-1)
        total = total+int(n/sqr)
        n = n % sqr
    return int(total)
