if __name__ == "__main__":
    with open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml') as f:
        bytes = (line.rsplit(None, 1)[1] for line in f)
        data = (int(num) for num in bytes if num != '-')
        total = sum(data)
    print(total)