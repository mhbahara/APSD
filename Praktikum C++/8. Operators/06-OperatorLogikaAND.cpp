#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, g, h, i;
    cout << "Masukan Nilai A = ";
    cin >> a;
    cout << "Masukan Nilai B = ";
    cin >> b;
    cout << "Masukan Nilai C = ";
    cin >> c;
    // Proses
    d = a + 4 < 10;
    e = b > a + 5;
    f = c - 3 >= 4;
    g = d && e && f;
    h = d || e || f;
    i = d || e && f;
    cout << endl << endl;
    cout << "Program Ekspresi AND" << endl << endl;
    cout << "Hasil dari d = a + 4 < 10 adalah " << d << endl;
    cout << "Hasil dari e = b > a + 5 adalah " << e << endl;
    cout << "Hasil dari f = c - 3 >= 4 adalah " << f;
    cout << endl << endl;
    cout << "Hasil dari g = d && e && f adalah " << g<< endl;
    cout << "Hasil dari h = d || e || f adalah " << h << endl;
    cout << "Hasil dari i = d || e && f adalah " << i << endl;
    cout << endl;
    return 0;
}
