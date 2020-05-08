import itertools

if __name__ == "__main__":
    with open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml') as f:
        for line in itertools.dropwhile(lambda line: not line.startswith('#'), f):
            print(line, end='')