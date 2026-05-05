#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

map<char, vector<string>> prod;
map<char, set<char>> leading, trailing;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char lhs;
        string rhs;
        cin >> lhs >> rhs;
        prod[lhs].push_back(rhs);
    }

    bool changed = true;

    while (changed) {
        changed = false;

        for (auto p : prod) {
            char A = p.first;

            for (auto rhs : p.second) {
                // LEADING
                if (!isupper(rhs[0])) {
                    if (leading[A].insert(rhs[0]).second)
                        changed = true;
                } else {
                    for (char c : leading[rhs[0]])
                        if (leading[A].insert(c).second)
                            changed = true;
                }

                // TRAILING
                int last = rhs.size() - 1;
                if (!isupper(rhs[last])) {
                    if (trailing[A].insert(rhs[last]).second)
                        changed = true;
                } else {
                    for (char c : trailing[rhs[last]])
                        if (trailing[A].insert(c).second)
                            changed = true;
                }
            }
        }
    }

    cout << "LEADING:\n";
    for (auto p : leading) {
        cout << p.first << ": ";
        for (char c : p.second) cout << c << " ";
        cout << endl;
    }

    cout << "TRAILING:\n";
    for (auto p : trailing) {
        cout << p.first << ": ";
        for (char c : p.second) cout << c << " ";
        cout << endl;
    }
}