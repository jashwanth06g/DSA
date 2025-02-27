#include <bits/stdc++.h>
using namespace std;

bool valid(string str) {
    int len = str.length();
    stack<char> s;

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if ((ch == '}' && top != '{') || 
                (ch == ']' && top != '[') || 
                (ch == ')' && top != '(')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string str = "{[]}";
    if (valid(str))
        cout << "BALANCED";
    else
        cout << "NOT BALANCED";
    
    return 0;
}


