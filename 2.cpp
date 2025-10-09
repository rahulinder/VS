#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix) {
    stack<string> s;

    for (char& ch : postfix) {
        if (isalnum(ch)) {
            s.push(string(1, ch));
        }
        else if (isOperator(ch)) {
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();

            string result = "(" + op1 + ch + op2 + ")";
            s.push(result);
        }
    }
    return s.top();
}

int main() {
    string postfix = "xyz/-kd*-";
    postfixToInfix(postfix);
    return 0;
}