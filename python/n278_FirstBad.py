# https://leetcode-cn.com/problems/first-bad-version/
# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 1
        right = n
        while left < right:
            if isBadVersion((left + right) // 2) == True:
                right = (left + right) // 2
            else:
                left = (left + right) // 2 + 1
        return left 
        

if __name__ == "__main__":
    pass
        