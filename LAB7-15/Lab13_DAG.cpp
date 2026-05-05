#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> dag;

    string op1 = "b*c";
    string op2 = "b*c";

    dag[op1] = "t1";

    if (dag.find(op2) != dag.end()) {
        cout << "Common subexpression eliminated\n";
        cout << "Use " << dag[op2] << endl;
    } else {
        dag[op2] = "t2";
    }
}