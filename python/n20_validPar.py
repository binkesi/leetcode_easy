# https://leetcode-cn.com/problems/valid-parentheses/
class Solution:
    def isValid(self, s: str) -> bool:
        stack_lis = []
        pare_dict = {"(": ")", "{": "}", "[": "]"}
        while s:
            a = s[-1]
            s = s[:-1]
            if len(stack_lis) != 0:
                try:
                    if pare_dict[a] == stack_lis[-1]:
                        stack_lis.pop()
                    else:
                        stack_lis.append(a)
                except KeyError:
                    stack_lis.append(a)
            else:
                stack_lis.append(a)
        if len(stack_lis) != 0:
            return False
        else:
            return True
            

if __name__ == "__main__":
    solu = Solution()
    print(solu.isValid("()[]{}"))