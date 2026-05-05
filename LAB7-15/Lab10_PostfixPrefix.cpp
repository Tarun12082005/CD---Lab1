#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if (c=='+'||c=='-') return 1;
    if (c=='*'||c=='/') return 2;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string res = "";

    for (char c : s) {
        if (isalnum(c)) res += c;
        else {
            while (!st.empty() && prec(st.top()) >= prec(c)) {
                res += st.top(); st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        res += st.top(); st.pop();
    }
    return res;
}

int main() {
    string s;
    cin >> s;

    cout << "Postfix: " << infixToPostfix(s) << endl;
}