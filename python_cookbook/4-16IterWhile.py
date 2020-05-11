CHUNKSIZE = 8192

def reader(s):
    while True:
        data = s.recv(CHUNKSIZE)
        if data == b'':
            break
        process_data(data)
        
def reader_a(s)
    for data in iter(lambda:s.recv(CHUNKSIZE), b''):
        process_data(data)