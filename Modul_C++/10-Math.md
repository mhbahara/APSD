## Math
C++ Memiliki banyak fungsi yang bisa digunakan untuk menyelesaikan banyak permasalahan matematika.

### Max dan Min 

`max` berfungsi untuk mencari nilai tertinggi pada sebuah nilai

`max(x,y)` akan menghasilkan nilai tertinggi antara x dan y 

**contoh penggunaan max**
```Cpp
#include <iostream>
using namespace std;

int main() {
  cout << max(5, 10);
  return 0;
}
```


`min(x,y)` akan menghasilkan nilai terendah antara x dan y

**contoh penggunaan min**
```Cpp
#include <iostream>
using namespace std;

int main() {
  cout << min(5, 10);
  return 0;
}
```

fungsi lain seperti `sqrt` (square root), `round` (rounds a number) dan `log` (natural logarithm), dapat di temukan pada header `#include <cmath>`

### List dari fungsi Math yang sering dipakai:

| Function | Description                                       |
|----------|---------------------------------------------------|
| abs(x)   | Mengembalikan nilai absolut dari x                |
| acos(x)  | Mengembalikan arccosine dari x                    |
| asin(x)  | Mengembalikan arcsine dari x                      |
| atan(x)  | Mengembalikan arctangent dari x                   |
| cbrt(x)  | Mengembalikan akar kubik dari x                   |
| ceil(x)  | Mengembalikan nilai x yang dibulatkan ke atas menjadi bilangan bulat terdekat |
| cos(x)   | Mengembalikan kosinus dari x                      |
| cosh(x)  | Mengembalikan kosinus hiperbolik dari x           |
| exp(x)   | Mengembalikan nilai dari Ex                        |
| expm1(x) | Mengembalikan ex -1                                |
| fabs(x)  | Mengembalikan nilai absolut dari x secara floating |
| fdim(x, y) | Mengembalikan selisih positif antara x dan y   |
| floor(x) | Mengembalikan nilai x yang dibulatkan ke bawah menjadi bilangan bulat terdekat |
| hypot(x, y) | Mengembalikan sqrt(x^2 + y^2) tanpa overflow atau underflow yang terjadi di antara |
| fma(x, y, z) | Mengembalikan x*y+z tanpa kehilangan presisi  |
| fmax(x, y) | Mengembalikan nilai tertinggi dari x dan y secara floating |
| fmin(x, y) | Mengembalikan nilai terendah dari x dan y secara floating |
| fmod(x, y) | Mengembalikan sisa pembagian floating point dari x/y |
| pow(x, y) | Mengembalikan nilai x pangkat y                   |
| sin(x)   | Mengembalikan sinus dari x (x dalam radian)       |
| sinh(x)  | Mengembalikan sinus hiperbolik dari sebuah nilai double |
| tan(x)   | Mengembalikan tangen dari sebuah sudut            |
| tanh(x)  | Mengembalikan tangen hiperbolik dari sebuah nilai double |


**Contoh penggunaan fungsi Math**
```Cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << sqrt(64) << "\n";
  cout << round(2.6) << "\n";
  cout << log(2) << "\n";
  return 0;
}
```
