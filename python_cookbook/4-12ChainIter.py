from itertools import chain

a = [2, 5, 3, 8, 4]
b = [5, 7, 9, 10, 4, 5, 2, 3]


if __name__ == "__main__":
    for i in chain(a, b):
        print(i)