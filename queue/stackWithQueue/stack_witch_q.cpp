// https://leetcode.com/problems/implement-stack-using-queues/description/
#include <iostream>
#include <queue>
using namespace std;

class MyStack {
private:
queue<int> q1;
queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()){
            cout << "stack is empty." << endl;
        }
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q1.pop();
        swap(q1,q2);
        return top;
    }
    
    int top() {
        if(q1.empty()){
            cout << "Stack is empty." << endl;
        }
        int top = q1.back();
        return top;
    }
    
    bool empty() {
        return q1.empty();
    }
};
int main() {
    MyStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.top() << endl;

    cout << "Pop element: " << stack.pop() << endl;
    cout << "Pop element: " << stack.pop() << endl;
    cout << "Pop element: " << stack.pop() << endl;

    if (stack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
