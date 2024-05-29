//https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
#include <iostream>
#include <stack>

using namespace std;

bool areBracketsBalanced(string expr){
    stack <char> t;
    for(int i=0; i < expr.length(); i++){
        if(t.empty()){
            t.push(expr[i]);
        }
        else if(t.top() == '(' && expr[i] == ')'){
            t.pop();
        }
        else if (t.top() == '{' && expr[i] == '}'){
            t.pop();
        }
        else if(t.top() == '[' && expr[i] == ']'){
            t.pop();
        }
        else {
            t.push(expr[i]);
        }
    }
    if(t.empty()){
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    string expr = "{()})[]";
 
    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}