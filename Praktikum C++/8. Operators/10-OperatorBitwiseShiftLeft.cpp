#include <iostream>
using namespace std;

 main() {
    int a, x, y;
    cout << "Masukan Nilai X = ";
    cin >> x;
    cout << "Masukan Nilai Y = ";
    cin >> y;
    a = x ^ y;
    cout << '\n';
    cout << "Hasil dari " << x << " & " << y << " = " << a << endl;
    return 0;
}
