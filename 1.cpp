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

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char& ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else {
            while (!s.empty() && precedence(ch) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix = "x-y/z-k*d";
    string postfix = infixToPostfix(infix);
    cout << "Infix expression: " << infix << endl;
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}