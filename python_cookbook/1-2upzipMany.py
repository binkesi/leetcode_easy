def drop_first_last(seq):
    first, *middle, last = seq
    return sum(middle)/len(middle)

records = [
    ('foo', 1, 2),
    ('bar', 'hello'),
    ('foo', 3, 4),
]

def do_foo(x, y):
    print("foo:", x, y)
    
def do_bar(s):
    print("bar:", s)
    
    
if __name__ == "__main__":
    grade = [45, 60, 67, 78, 89, 92, 99]
    print(drop_first_last(grade))
    record = ('Dave', 'dave@example.com', '773-555-1212', '847-555-1212')
    name, email, *phone_nums = record
    print(phone_nums)
    for tag, *args in records:
        if tag == "foo":
            do_foo(*args)
        if tag == "bar":
            do_bar(*args)