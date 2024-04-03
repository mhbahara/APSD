#include <iostream>
using namespace std;

main() {
  int x, y, a = 0, b = 0, c = 0, d = 0;
  cout << "Masukan Nilai X : "; cin >> x;
  cout << "Masukan Nilai Y : "; cin >> y;
  a = x + y; c = x % y;
  b = x - y; d = x * y;
  printf("Hasil Dari A = X + Y = %i \n", a);
  printf("Hasil Dari B = X - Y = %i \n", b);
  cout << "Hasil dari C = X % Y = " << c << endl;
  cout << "Hasil dari D = X * Y = " << d << endl;
  return 0;
}
