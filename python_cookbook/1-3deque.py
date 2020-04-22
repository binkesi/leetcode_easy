from collections import deque

def search(lines, pattern, history):
    pre_lines = deque(maxlen=history)
    for line in lines:
        if pattern in line:
            yield line, pre_lines
        pre_lines.append(line)
        

if __name__ == "__main__":
    lines = deque(maxlen=5)
    with open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.txt', "r") as f:
        for line, pre_lines in search(f, "python", 5):
            for pline in pre_lines:
                print(pline, end='')
            print(line, end='')
            print('-' * 20)