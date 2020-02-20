# https://leetcode-cn.com/problems/implement-stack-using-queues/
class MyStack:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.myqueue = []
        

    def push(self, x: int) -> None:
        """
        Push element x onto stack.
        """
        self.myqueue.append(x)

    def pop(self) -> int:
        """
        Removes the element on top of the stack and returns that element.
        """
        reversed(self.myqueue)
        tmp = self.myqueue.pop()
        reversed(self.myqueue)
        return tmp

    def top(self) -> int:
        """
        Get the top element.
        """
        return self.myqueue[-1]

    def empty(self) -> bool:
        """
        Returns whether the stack is empty.
        """
        return len(self.myqueue) == 0


if __name__ == "__main__":
    pass