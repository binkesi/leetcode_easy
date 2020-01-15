# https://leetcode-cn.com/problems/two-sum/
class Solution:
    def twoSum_sort(self, nums: list, target: int) -> list:
        tmp = list(nums)
        new_nums = sorted(nums)
        i = 0
        j = len(nums) - 1
        while i != j:
            if new_nums[i] + new_nums[j] == target:
                index_a = tmp.index(new_nums[i])
                index_b = tmp.index(new_nums[j])
                if index_a == index_b:
                    index_b = index_b + tmp[index_a+1:].index(target/2) + 1
                return [index_a, index_b]
            elif new_nums[i] + new_nums[j] < target:
                i += 1
            elif new_nums[i] + new_nums[j] > target:
                j -= 1
        return "No sum match."

    def twoSum_hash(self, nums: list, target: int) -> list:
        hashmap = {}
        for ind, num in enumerate(nums):
            hashmap[num] = ind
        for i, num in enumerate(nums):
            j = hashmap.get(target-num)
            if j is not None and i != j:
                return [i, j]


if __name__ == "__main__":
    num1 = [5, 7, 4, 3, 1, 10, 6]
    solution = Solution()
    print(solution.twoSum_sort(num1, 10))
    print(solution.twoSum_hash(num1, 10))
