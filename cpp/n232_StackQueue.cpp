// https://leetcode-cn.com/problems/implement-queue-using-stacks/
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        instack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (outstack.size() == 0){
            while (instack.size() != 0){
                int ele = instack.top();
                outstack.push(ele);
                instack.pop();
            }
        }
        int res = outstack.top();
        outstack.pop();
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        if (outstack.size() == 0){
            while (instack.size() != 0){
                int ele = instack.top();
                outstack.push(ele);
                instack.pop();
            }
        }
        return outstack.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (instack.size() == 0) && (outstack.size() == 0);
    }
    
private:
    stack<int> instack;
    stack<int> outstack;
};

int main(){
    return 0;
}