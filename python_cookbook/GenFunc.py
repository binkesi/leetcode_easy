import math
import traceback

def generate(func):
    def gen_func(c):
        for item in c:
            yield func(item)
    return gen_func
        
        
if __name__ == "__main__":
    gen_sqrt = generate(math.sqrt)
    for i in gen_sqrt(range(10)):       
        print(i)
        