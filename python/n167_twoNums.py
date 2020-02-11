# https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/

class Solution:
    def twoSum(self, numbers, target: int):
        p_h = 0
        p_t = len(numbers) - 1
        while p_h < p_t:
            if numbers[p_h] + numbers[p_t] < target:
                p_h += 1
            elif numbers[p_h] + numbers[p_t] > target:
                p_t -= 1
            else:
                return (p_h+1, p_t+1)
        return None


if __name__ == "__main__":
    pass