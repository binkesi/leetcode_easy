def Countdown(num):
    print("Start count down from {}".format(num))
    while num > 0:
        yield num
        num -= 1
    print("Done!")
    
    
if __name__ == "__main__":
    for n in Countdown(4):
        print(n)
    c = Countdown(4)
    a = next(c)
    print(a)