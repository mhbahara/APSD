
# C++ Break and Continue
## 1. Pernyataan break

Pernyataan `break` telah dibahas pada pernyataan pengambilan keputusan `switch`. Pernyataan `break` ini berfungsi untuk keluar dari struktur switch. Selain itu pernyataan `break` berfungsi keluar dari perulangan (`for`, `while`, dan `do-while`). Jika pernyataan `break` dikerjakan, maka eksekusi akan dilanjutkan ke pernyataan yang terletak sesudah akhir dari badan perulangan (loop).

**Contoh-1**

```cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}

```

Output yang akan dihasilkan, dari program contoh-1 diatas adalah:

```
0
1
2
3
```

**Contoh-2**

```cpp
#include <stdio.h>

int main() {
    int a = 3, b = 2, c = 1, bil;
    printf("Bil-A | Bil-B | Bil-C\n");
    printf("-------------------------");
    for (bil = 1; bil <= 10; ++bil) {
        a += b; 
        b += c; 
        c += 2;
        printf("\n%d \t| %d \t| %d", a, b, c);
        if (c == 13)
            break;
    }
    getchar(); // Use getchar() instead of getche() for input
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-2 diatas adalah:

```
Bil-A | Bil-B | Bil-C
-------------------------
5       | 3     | 3
8       | 6     | 5
14      | 11    | 7
25      | 18    | 9
43      | 27    | 11
70      | 38    | 13
```

## 2. Pernyataan continue

Pernyataan `continue` digunakan untuk mengarahkan eksekusi ke iterasi (proses) berikutnya pada loop yang sama, dengan kata lain mengembalikan proses yang sedang dilaksanakan ke-awal loop lagi, tanpa menjalankan sisa perintah dalam loop tersebut.

**Contoh-3**

```cpp
#include <stdio.h>

int main() {
    int bil;
    for (bil = 1; bil <= 10; ++bil) {
        if (bil == 6)
            continue;
        printf(" %d ", bil);
    }
    getchar(); // Use getchar() instead of getch() for input
    return 0;
}


```

Output yang akan dihasilkan, dari program contoh-3 diatas adalah:

```
 1  2  3  4  5  7  8  9  10
```

**Contoh-4**
```Cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}
```

Output yang akan dihasilkan, dari program contoh-4 diatas adalah:

```
0
1
2
3
5
6
7
8
9
```