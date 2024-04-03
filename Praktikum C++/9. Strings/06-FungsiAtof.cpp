#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    char kata[20];
    float angka, a, b;

    cout << "Masukan Sembarang Kata berupa angka = ";
    cin.getline(kata, 20);

   angka = atof(kata);
    a = angka + 5;
  cout << "Hasil kata = " << kata << endl;
    cout << "Hasil Perubahan ditambah dengan 5 = " << a << endl;

    return 0;
}
