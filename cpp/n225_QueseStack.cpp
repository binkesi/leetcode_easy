// https://leetcode-cn.com/problems/implement-stack-using-queues/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    vector<int> myqueue = {};
    
    /** Push element x onto stack. */
    void push(int x) {
        myqueue.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        reverse(myqueue.begin(), myqueue.end());
        int tmp = myqueue.front();
        myqueue.erase(myqueue.begin());
        reverse(myqueue.begin(), myqueue.end());
        return tmp;
    }
    
    /** Get the top element. */
    int top() {
        return myqueue[myqueue.size()-1];
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myqueue.empty();
    }
};

int main(){
    return 0;
}