#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a1[20];
    char a2[20];

    cout << "Masukkan Kata - 1= ";
    cin >> a1;
    cout << "Masukkan Kata - 2= ";
    cin >> a2;

    strcat(a1, a2);

    cout << "Hasil Penggabungannya " << a1 << endl;

    return 0;
}
