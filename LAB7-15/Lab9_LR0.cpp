#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string lhs, rhs;
    int dot;
};

int main() {
    vector<Item> items = {
        {"E", "E+T", 0},
        {"E", "T", 0},
        {"T", "T*F", 0},
        {"T", "F", 0},
        {"F", "(E)", 0},
        {"F", "i", 0}
    };

    cout << "Closure I0:\n";
    for (auto it : items) {
        cout << it.lhs << " -> ";
        for (int i = 0; i <= it.rhs.size(); i++) {
            if (i == it.dot) cout << ".";
            if (i < it.rhs.size()) cout << it.rhs[i];
        }
        cout << endl;
    }
}