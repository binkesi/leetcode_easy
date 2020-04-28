import re
date_re = re.compile(r'(\d+)/(\d+)/(\d+)')

if __name__ == "__main__":
    date_a = "2020/04/28"
    date_b = "April.28 2020"
    text = "Today is 11/27/2012. PyCon starts 3/13/2013."
    print(date_re.match(date_a).group(0))
    print(date_re.match(date_b))
    print(date_re.findall(text))