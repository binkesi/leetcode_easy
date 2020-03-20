from operator import itemgetter

rows = [
    {'fname': 'Brian', 'lname': 'Jones', 'uid': 1003},
    {'fname': 'David', 'lname': 'Beazley', 'uid': 1002},
    {'fname': 'John', 'lname': 'Cleese', 'uid': 1001},
    {'fname': 'Big', 'lname': 'Jones', 'uid': 1004}
]

def sort_by_key(my_list):
    sort_list = sorted(my_list, key=lambda k: k['fname'])
    print(sort_list)
    sort_two_key = sorted(my_list, key=itemgetter('lname', 'fname'))
    print(sort_two_key)
    
    
if __name__ == "__main__":
    sort_by_key(rows)