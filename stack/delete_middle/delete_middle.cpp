// https://www.geeksforgeeks.org/delete-middle-element-stack/

#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>& s){
    int size = s.size();
    stack<int> newStack;
    int c = 0;
    while(c < size / 2){
        int n = s.top();
        newStack.push(n);
        s.pop();
        c++;
    }
    s.pop();
    while(!newStack.empty()){
        s.push(newStack.top());
        newStack.pop();
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteMiddle(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}