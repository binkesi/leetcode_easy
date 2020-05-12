import io
import sys

if __name__ == "__main__":
    f = open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml', 'wt')
    print(f)
    print(f.buffer)
    print(f.buffer.raw)
    b = f.detach()
    print(b)
    f = io.TextIOWrapper(b, encoding='latin-1')
    print(f)
    sys.stdout.buffer.write(b'Hello\n')