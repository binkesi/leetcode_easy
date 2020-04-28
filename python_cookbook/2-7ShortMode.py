import re
str_pat = re.compile(r'"(.*)"')
str_pat_short = re.compile(r'"(.*?)"')
text = 'Computer says "no." Phone says "yes."'

if __name__ == "__main__":
    print(str_pat.findall(text))
    print(str_pat_short.findall(text))