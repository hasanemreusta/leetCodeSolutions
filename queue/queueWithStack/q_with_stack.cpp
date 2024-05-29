// https://leetcode.com/problems/implement-queue-using-stacks/solutions/4645226/beats-100-c/
#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> st1;
    stack<int> st2;    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int t;
        while(!st1.empty()){
            t = st1.top();
            st2.push(t);
            st1.pop();
        }
        st2.pop();
        int last = t;
        while (!st2.empty()){
            t = st2.top();
            st1.push(t);
            st2.pop();
        }
        return last;
        
    }
    
    int peek() {
        int t;
        while(!st1.empty()){
            t = st1.top();
            st2.push(t);
            st1.pop();
        }
        int top = t;
        while(!st2.empty()){
            t = st2.top();
            st1.push(t);
            st2.pop();
        }
        return top;
        
    }
    
    bool empty() {
        if (st1.empty() && st2.empty()){
            return true;
        }
        else return false;
    }
};
int main() {
    MyQueue q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << "Front element of queue: " << q.peek() << endl;
    cout << "Removed element from queue: " << q.pop() << endl;
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;
    
    return 0;
}

