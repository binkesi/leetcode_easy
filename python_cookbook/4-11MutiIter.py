from itertools import zip_longest

a = [2, 5, 3, 8, 4]
b = [5, 7, 9, 10, 4, 5, 2, 3]


if __name__ == "__main__":
    for i in zip(a, b):
        print(i)
        
    for j in zip_longest(a, b):
        print(j)
    print(list(zip_longest(a, b)))
    dx = dict(zip(a, b))
    print(dx)