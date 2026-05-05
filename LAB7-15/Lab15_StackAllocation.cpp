#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);

    cout << "Top: " << st.top() << endl;

    st.pop();

    cout << "After pop Top: " << st.top() << endl;
}