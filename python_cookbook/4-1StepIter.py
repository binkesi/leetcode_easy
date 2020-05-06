def manual_iter(file):
    with open(file) as f:
        while True:
            line = next(f, None)
            if line is None:
                break
            print(line, end='')
        
        
if __name__ == "__main__":
    manual_iter(r"D:\My_pycharm_project\leetcode_easy\python\n7_reverse.py")