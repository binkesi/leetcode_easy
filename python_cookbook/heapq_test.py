import heapq

if __name__ == "__main__":
    nums = [1, 8, 2, 23, 7, -4, 18, 23, 42, 37, 2]
    heapq.heapify(nums)
    heapq.heappush(nums, -9)
    print(nums)
    print(heapq.heappop(nums))
    print(nums)