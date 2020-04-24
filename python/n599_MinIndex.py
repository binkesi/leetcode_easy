# https://leetcode-cn.com/problems/minimum-index-sum-of-two-lists/
class Solution:
    def findRestaurant(self, list1, list2):
        relis = list(set(list1) & set(list2))
        res = []
        min_index = list1.index(relis[0]) + list2.index(relis[0])
        res.append(relis[0])
        for i in range(1, len(relis)):
            this_index = list1.index(relis[i]) + list2.index(relis[i])
            if this_index == min_index:
                res.append(relis[i])
            if this_index < min_index:
                res.clear()
                res.append(relis[i])
                min_index = this_index
        return res


if __name__ == "__main__":
    nums = [2, 4, 5, 3, 1]
    res = sum(x * x for x in nums)
    print(res)