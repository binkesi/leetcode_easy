def recv_Count():
    try:
        while True:
            n = yield
            print("Recieve ", n)
    except GeneratorExit:
        print("Kaboom!")
        
        
if __name__ == "__main__":
    recv = recv_Count()
    recv.send(None)
    for i in range(10):
        recv.send(i)
    recv.close()