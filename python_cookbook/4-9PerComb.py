from itertools import permutations, combinations

if __name__ == "__main__":
    items = ['a', 'b', 'c']
    for i in permutations(items):
        print(i)
    for j in combinations(items, 2):
        print(j)