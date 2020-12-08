from math import fabs;

def findRoot(a,b):
    x = 1
    x0 = 0
    while fabs(x0 - x) > 0.00001:
        x0 = x;
        x = 1 / a * ((a - 1) * x0 + b / (x0 ** (a - 1)))
    return x

def findY(a, b):
    first = findRoot(5, a)
    second = findRoot(5, b)
    return findRoot(5, first * second) + first

print(findY(5, 32))