from collections import OrderedDict

if __name__ == "__main__":
    d = OrderedDict()
    d['name'] = 'guannan'
    d['age'] = 32
    d['height'] = 182
    d['weight'] = 65
    
    for key in d:
        print(key, d[key])