from collections import Iterable
def flatten(mylist):
    for item in mylist:
        if isinstance(item, Iterable):
            yield from flatten(item)
        else:
            yield item


if __name__ == "__main__":
    mylist = [1, 2, 3, [4, 5, 6, [7, 8], [9, 10]], [11, 12], 13]
    res = []
    for i in flatten(mylist):
        res.append(i)
    print(res)