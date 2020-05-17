def consumer(func):
    def start(*args, **kwargs):
        c = func(*args, **kwargs)
        c.send(None)
        return c
    return start
    
@consumer
def recv_count():
    try:
        while True:
            n = yield
            print("Recieve ", n)
    except GeneratorExit:
        print("Kaboom!")
        
        
if __name__ == "__main__":
    recv = recv_count()
    for i in range(10):
        recv.send(i)