import os

if __name__ == "__main__":
    print(os.listdir(r'D:\My_pycharm_project\leetcode_easy\python_cookbook'))
    pyfiles = [name for name in os.listdir(r'D:\My_pycharm_project\leetcode_easy\python_cookbook') if name.endswith('.py')]
    print(pyfiles)       