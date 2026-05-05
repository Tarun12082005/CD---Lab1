#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter number of basic blocks: ";
    cin >> n;

    vector<set<int>> GEN(n), KILL(n), IN(n), OUT(n);

    // Input GEN and KILL sets
    for (int i = 0; i < n; i++) {
        int g, k, x;

        cout << "\nBlock " << i << " GEN count: ";
        cin >> g;
        cout << "Enter GEN elements: ";
        for (int j = 0; j < g; j++) {
            cin >> x;
            GEN[i].insert(x);
        }

        cout << "Block " << i << " KILL count: ";
        cin >> k;
        cout << "Enter KILL elements: ";
        for (int j = 0; j < k; j++) {
            cin >> x;
            KILL[i].insert(x);
        }
    }

    bool changed = true;

    // Iterative algorithm
    while (changed) {
        changed = false;

        for (int i = 0; i < n; i++) {
            set<int> old_out = OUT[i];

            // IN[B] = OUT of previous block (simple linear CFG)
            if (i > 0)
                IN[i] = OUT[i - 1];

            // OUT[B] = GEN[B] ∪ (IN[B] - KILL[B])
            OUT[i] = GEN[i];

            for (int x : IN[i]) {
                if (KILL[i].find(x) == KILL[i].end()) {
                    OUT[i].insert(x);
                }
            }

            if (OUT[i] != old_out)
                changed = true;
        }
    }

    // Output results
    cout << "\nFinal IN and OUT sets:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBlock " << i << ":\n";

        cout << "IN: ";
        for (int x : IN[i]) cout << x << " ";

        cout << "\nOUT: ";
        for (int x : OUT[i]) cout << x << " ";
        cout << endl;
    }

    return 0;
}