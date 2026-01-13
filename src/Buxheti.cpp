#include <iostream>
using namespace std;

int main() {
    double buxheti;

    // Marrim buxhetin total
    cout << "Shkruaj buxhetin mujor: ";
    cin >> buxheti;

    // Perqindjet (mund t'i ndryshosh)
    double perqind_kerr = 20;      // 20%
    double perqind_shtepi = 40;    // 40%
    double perqind_kursime = 20;   // 20%
    double perqind_tjera = 20;     // 20%

    // Llogaritjet
    double kerr = buxheti * perqind_kerr / 100;
    double shtepi = buxheti * perqind_shtepi / 100;
    double kursime = buxheti * perqind_kursime / 100;
    double tjera = buxheti * perqind_tjera / 100;

    // Rezultati
    cout << "\n--- Shperndarja e buxhetit ---\n";
    cout << "Kerr: " << kerr << " €" << endl;
    cout << "Sene te shtepise: " << shtepi << " €" << endl;
    cout << "Kursime: " << kursime << " €" << endl;
    cout << "Te tjera: " << tjera << " €" << endl;

    return 0;
}
