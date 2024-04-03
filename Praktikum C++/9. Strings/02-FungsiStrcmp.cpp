#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a1[] = "UNIVERSITAS PUTRA BANGSA";
    char a2[] = "Universitas Putra Bangsa";
    char b1[] = "universitas putra bangsa";

    cout << "Hasil Perbandingan " << a1 << " dan " << a2 << " -> ";
    cout << strcmp(a1, a2) << endl;

    cout << "Hasil Perbandingan " << a2 << " dan " << a1 << " -> ";
    cout << strcmp(a2, a1) << endl;

    cout << "Hasil Perbandingan " << a1 << " dan " << b1 << " -> ";
    cout << strcmp(a1, b1) << endl;

    return 0;
}
