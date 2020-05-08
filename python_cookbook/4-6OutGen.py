from collections import deque

class linehistory:
    def __init__(self, lines, hislen=3):
        self.lines = lines
        self.history = deque(maxlen=hislen)
        
    def __iter__(self):
        for lineno, line in enumerate(self.lines, 1):
            self.history.append((lineno, line))
            yield line
       
    def clear(self):
        self.history.clear()
        

if __name__ == "__main__":
    with open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.txt') as f:
        lines = linehistory(f)
        for line in lines:
            if 'python' in line:
                for lineno, hline in lines.history:
                    print('{}:{}'.format(lineno, hline), end='')            