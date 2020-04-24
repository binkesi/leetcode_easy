record = '....................100 .......513.25 ..........'

if __name__ == "__main__":
    score = slice(20, 23, 1)
    price = slice(31, 37)
    print(record[score])
    print(int(record[score]) * float(record[price]))
    print(score.step)