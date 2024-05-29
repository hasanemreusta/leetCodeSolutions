// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <string>
using namespace std;


    int firstUniqChar(string s) {
        for(int i = 0; i < s.length(); i++){
            int cnt = 0;
            char ch = s[i];
            for(int j = 0; j < s.length(); j++){
                if(s[j] == ch){
                    cnt++;
                }
            }
            if (cnt == 1){
                return i;
            }
        }
        return -1;
    }


int main() {
    string s = "aaaaaxxts";
    cout << firstUniqChar(s) << endl;
}