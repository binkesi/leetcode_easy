// https://leetcode-cn.com/problems/min-stack/
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int, int>> min_stack;

    MinStack() {}
    
    void push(int x) {
        if (min_stack.empty()){
            auto stack_pair = pair<int, int>(x, x);
            min_stack.push(stack_pair);
            return;
        }
        auto it = min_stack.top();
        if (x < it.second){
            auto stack_pair = pair<int, int>(x, x);
            min_stack.push(stack_pair);
        }
        else{
            auto stack_pair = pair<int, int>(x, it.second);
            min_stack.push(stack_pair);
        }
    }
    
    void pop() {
        if (min_stack.empty()) return;
        else min_stack.pop();
    }
    
    int top() {
        return min_stack.top().first;
    }
    
    int getMin() {
        return min_stack.top().second;
    }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(1);
    obj->push(3);
    obj->push(5);
    obj->push(4);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
    cout << param_3 << ' ' << param_4 << endl;
    return 0;
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */