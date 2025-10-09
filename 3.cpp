#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

string infixToPrefix(string infix) {
    reverseString(infix);
    
    stack<char> s;
    string postfix_temp = "";

    for (char& ch : infix) {
        if (isalnum(ch)) {
            postfix_temp += ch;
        } else {
            while (!s.empty() && precedence(ch) < precedence(s.top())) {
                postfix_temp += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) {
        postfix_temp += s.top();
        s.pop();
    }
    reverseString(postfix_temp);
    return postfix_temp;
}

int main() {
    string infix = "x-y/z-k*d";
    string prefix = infixToPrefix(infix);
    return 0;
}