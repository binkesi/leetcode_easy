text = "Hello world"

if __name__ == "__main__":
    print(format(text, ">20"))
    print(format(text, "#^20"))
    print('{:>10s} {:>10s}'.format('Hello', 'World'))