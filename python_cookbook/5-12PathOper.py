import os
import time

if __name__ == "__main__":
    print(os.path.exists(r'D:\My_pycharm_project\leetcode_easy\python_cookbook'))
    print(os.path.isfile(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml'))
    print(os.path.getsize(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml'))
    print(time.ctime(os.path.getmtime(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml')))