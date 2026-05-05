#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input string (i+i*i): ";
    cin >> input;

    stack<char> st;
    int i = 0;

    cout << "\nStack\tInput\tAction\n";

    while (true) {
        // Shift
        if (i < input.length()) {
            st.push(input[i]);
            cout << " ";
            stack<char> temp = st;
            string s = "";
            while (!temp.empty()) {
                s = temp.top() + s;
                temp.pop();
            }
            cout << s << "\t" << input.substr(i + 1) << "\tShift " << input[i] << endl;
            i++;
        }

        // Reduce
        if (st.size() >= 3) {
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            char c = st.top(); st.pop();

            if (c == 'i' && (b == '+' || b == '*') && a == 'i') {
                st.push('E');
                cout << "E\t\tReduce E->E" << b << "E\n";
            } else {
                st.push(c);
                st.push(b);
                st.push(a);
            }
        }

        if (i == input.length())
            break;
    }

    if (st.size() == 1 && st.top() == 'E')
        cout << "\nString Accepted ✅\n";
    else
        cout << "\nString Rejected ❌\n";

    return 0;
}