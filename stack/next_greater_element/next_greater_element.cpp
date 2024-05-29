// https://leetcode.com/problems/next-greater-element-i/description/
#include <iostream>
#include <stack>
using namespace std;

void printNextGreaterElem(int arr[], int s){
    stack <int> st;
    st.push(arr[0]);
    for (int i=1; i < s; i++){
        while(!st.empty() && st.top() < arr[i]){
            cout << st.top() << "-> " << arr[i] << endl;
            st.pop();
        }
        st.push(arr[i]);
    }
    while(!st.empty()){
        cout << st.top() << "-> -1" << endl;
        st.pop();
    }
}

