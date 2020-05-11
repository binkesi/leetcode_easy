from functools import partial

RecordSize = 64

if __name__ == "__main__":
    with open(r'D:\My_pycharm_project\leetcode_easy\python_cookbook\test.yml', 'rb') as f:
        records = iter(partial(f.read, RecordSize), b'')
        for record in records:
            print(record.decode('utf-8'))