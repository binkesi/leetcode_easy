if __name__ == "__main__":
    p = (4, 5)
    a, b = p 
    print(a, b)
    data = [ 'ACME', 50, 91.1, (2012, 12, 21) ]
    name, age, value, (year, month, day) = data
    print(str(month)+"/"+str(year)+"/"+str(day))
    s = "Hello"
    a, b, _, c, d = s
    print(a, b, c, d)