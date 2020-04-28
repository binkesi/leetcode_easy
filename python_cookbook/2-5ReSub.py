import re
from calendar import month_abbr

text = 'Today is 11/27/2012. PyCon starts 3/13/2013.'
date_re = re.compile(r'(\d+)/(\d+)/(\d+)')
def mon_replace(mon):
    mon_name = month_abbr[int(mon.group(1))]
    return '{} {} {}'.format(mon.group(2), mon_name, mon.group(3))


if __name__ == "__main__":
    abc = text.replace('11/27/2012', '04/28/2020')
    print(abc)
    aaa = re.sub(r'(\d+)/(\d+)/(\d+)', r'\3.\1.\2', abc)
    print(aaa)
    bbb = date_re.sub(r'\3-\1-\2', abc)
    print(bbb)
    ccc, n = date_re.subn(mon_replace, text)
    print(ccc, n)
    