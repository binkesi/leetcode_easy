prices = {
    'ACME': 45.23,
    'AAPL': 612.78,
    'IBM': 205.55,
    'HPQ': 37.20,
    'FB': 10.75
}

if __name__ == "__main__":
    min_price = min(zip(prices.values(), prices.keys()))
    print(min_price)
    sort_price = sorted(zip(prices.values(), prices.keys()))
    print(sort_price)