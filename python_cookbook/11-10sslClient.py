from socket import socket, AF_INET, SOCK_STREAM
import ssl

if __name__ == "__main__":
    s = socket(AF_INET, SOCK_STREAM)
    s.connect(('localhost', 20000))
    s.send(b'Hello World?')
    print(s.recv(8192))