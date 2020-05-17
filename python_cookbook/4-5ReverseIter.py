class CountDown:
    def __init__(self, num):
        self._start = num
       
    def __iter__(self):
        n = self._start
        while n > 0:
            yield n
            n -= 1
            
    def __reversed__(self):
        n = 1
        while n <= self._start:
            yield n
            n += 1
            
            
if __name__ == "__main__":
    c = CountDown(10)
    for i in c:
        print(i)
    for j in reversed(c):
        print(j)