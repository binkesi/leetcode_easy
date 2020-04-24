a = [1, 5, 2, 1, 9, 1, 5, 10]
b = [ {'x':1, 'y':2}, {'x':1, 'y':3}, {'x':1, 'y':2}, {'x':2, 'y':4}]

def dedup(items, key=None):
    seen = set()
    for item in items:
        val = item if key is None else key(item)
        if val not in seen:
            yield item
            seen.add(val)


if __name__ == "__main__":
    print(list(dedup(a)))
    print(list(dedup(b, key = lambda d: (d['x'], d['y']))))