#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    cout << "MOV R1, " << b << endl;
    cout << "ADD R1, " << c << endl;
    cout << "MOV " << a << ", R1\n";
}