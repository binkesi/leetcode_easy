prices = {
    'ACME': 45.23,
    'AAPL': 612.78,
    'IBM': 205.55,
    'HPQ': 37.20,
    'FB': 10.75
}


if __name__ == "__main__":
    d1 = {key: value for key, value in prices.items() if value > 200}
    for key, value in d1.items():
        print((key, value))