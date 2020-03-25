values = ['1', '2', '-3', '-', '4', 'N/A', '5']

def is_int(ele):
    try:
        a = int(ele)
        return True
    except ValueError:
        return False
    

if __name__ == "__main__":
    new_values = (filter(is_int, values))
    for i in new_values:
        print(i)