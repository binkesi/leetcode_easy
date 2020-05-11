import threading, queue

def feedQueue(source, thequeue):
    for item in source:
        thequeue.put(item)
    thequeue.put(StopIteration)
    
def genfrom_queue(thequeue):
    while True:
        item = thequeue.get()
        if item is StopIteration:
            break
        yield item

def pri_404(log_q):
    log = genfrom_queue(log_q)
    r404 = (r for r in log if r['status'] == 404)
    for r in r404:
        print(r['host'], r['datetime'], r['request'])
        

if __name__ == "__main__":
    log_q = queue.Queue()
    r_thread = threading.Thread(target=pri_404, args=(log_q,))
    r_thread.start()
    
    lines = follow(open('access-log'))
    log = apache_log(lines)
    feedQueue(log, log_q)
    