if __name__ == "__main__":
    a = {
        'x' : 1,
        'y' : 2,
        'z' : 3
    }
    
    b = {
        'w' : 10,
        'x' : 11,
        'y' : 2
    }
    print(a.keys() & b.keys())
    print(a.keys() - b.keys())   
    print(a.keys() | b.keys()) 
    print(a.keys() ^ b.keys()) 
    # make new dict without several keys
    c = {key:a[key] for key in a.keys() - {'z', 'w'}}
    for key, value in c.items():
        print((key, value))
    