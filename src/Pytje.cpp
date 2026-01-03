#include <iostream>
using namespace std;

int main() {
    string pergjigjja;

    cout << "A deshiron me vazhdu biseden? (po/jo): ";
    cin >> pergjigjja;

    if (pergjigjja == "po") {
        cout << "Shume mire!" << endl;

        cout << "A ke kohe sot? (po/jo): ";
        cin >> pergjigjja;

        if (pergjigjja == "po") {
            cout << "Perfekt, shihemi sot." << endl;
        } else {
            cout << "Ne rregull, ndoshta neser." << endl;
        }

    } else if (pergjigjja == "jo") {
        cout << "Ok, faleminderit gjithsesi." << endl;
    } else {
        cout << "Pergjigje e pavlefshme!" << endl;
    }

    return 0;
}
