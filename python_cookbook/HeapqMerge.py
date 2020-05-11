import heapq

list1 = [1, 4, 6, 9]
list2 = [3, 5, 7, 8]


if __name__ == "__main__":
    for i in heapq.merge(list1, list2):
        print(i)