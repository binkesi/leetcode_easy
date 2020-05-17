if __name__ == "__main__":
    for i in range(5):
        print(i, end=' ')
    print('ACME', 10, 91.2, sep=',', end='\n')
    
    row = ('ACME', 50, 91.5)
    print(','.join(str(x) for x in row))
    print(*row, sep=',')