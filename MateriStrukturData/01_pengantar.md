# Struktur Data

## 1. Pengantar Struktur Data

### 1. **Pengantar Struktur Data dan Algoritma**
   - Definisi struktur data: Penyimpanan dan pengorganisasian data untuk mempermudah akses dan modifikasi.
   - Definisi algoritma: Sekumpulan instruksi langkah-demi-langkah untuk menyelesaikan suatu masalah.

### 2. **Tipe Data Primitif vs. Abstrak**

#### Tipe Data Primitif
Tipe data primitif adalah jenis data yang paling dasar dalam pemrograman. Mereka biasanya disediakan oleh bahasa pemrograman itu sendiri dan tidak dapat dipecah menjadi tipe data yang lebih sederhana. Tipe data ini memiliki ukuran tetap dan merupakan blok bangunan utama dari data. Contoh tipe data primitif meliputi:

- **Integer**: Angka bulat (misalnya, -1, 0, 1, 2).
- **Float**: Angka desimal atau angka dengan titik mengambang (misalnya, 3.14, -2.718).
- **Char**: Karakter tunggal (misalnya, 'a', 'b', '1', '$').
- **Boolean**: Nilai yang hanya bisa bernilai benar (true) atau salah (false).

#### Tipe Data Abstrak (Abstract Data Types, ADTs)
Tipe data abstrak adalah model untuk tipe data tertentu yang ditentukan oleh perilaku mereka (operasi yang dapat dilakukan pada mereka) dari pada bagaimana mereka diimplementasikan. ADT mendefinisikan struktur data dalam istilah apa yang bisa dilakukan dengan mereka, tanpa menetapkan bagaimana operasi-operasi itu dilakukan. Contoh dari ADT meliputi:

- **Stack**
  - Struktur data yang mengikuti prinsip LIFO (Last In, First Out).
  - Operasi utama: push (menambah elemen di atas), pop (menghapus elemen teratas), dan peek (melihat elemen teratas tanpa menghapusnya).

- **Queue**
  - Struktur data yang mengikuti prinsip FIFO (First In, First Out).
  - Operasi utama: enqueue (menambah elemen di belakang), dequeue (menghapus elemen dari depan), dan front (melihat elemen depan tanpa menghapusnya).

- **List**
  - Struktur data yang merepresentasikan urutan dari elemen, yang mungkin memiliki panjang tetap atau dinamis.
  - Operasi utama: penambahan elemen, penghapusan elemen, akses elemen berdasarkan indeks, dan pencarian elemen.

- **Tree**
  - Struktur data hierarkis yang terdiri dari node, dengan satu node sebagai root dan node lainnya sebagai anak dari node tersebut.
  - Tipe yang umum: binary tree, binary search tree (BST).
  - Operasi utama: penambahan elemen, penghapusan elemen, traversal (preorder, inorder, postorder), dan pencarian elemen.

- **Graph**
  - Struktur data yang terdiri dari himpunan node (vertex) yang mungkin terhubung oleh garis (edge).
  - Tipe yang umum: directed graph, undirected graph, weighted graph, unweighted graph.
  - Operasi utama: penambahan vertex/edge, penghapusan vertex/edge, traversal (DFS, BFS), dan pencarian jalur.

`ADTs berfokus pada operasi yang bisa dilakukan pada data, bukan pada bagaimana data tersebut disimpan atau diimplementasikan secara internal. Ini memberikan fleksibilitas dan abstraksi yang lebih tinggi dalam pemrograman.`

### 3. **Kompleksitas Waktu dan Ruang**

#### Notasi Big O
Notasi Big O adalah cara untuk mengukur efisiensi algoritma dalam hal waktu (waktu eksekusi) dan ruang (memori yang digunakan) berdasarkan ukuran input. Notasi ini memberikan gambaran tentang seberapa baik algoritma skala dengan pertambahan ukuran input. 

Berikut adalah beberapa notasi Big O yang umum:

- **O(1)**: Kompleksitas konstan. Waktu eksekusi atau ruang yang digunakan tetap sama, terlepas dari ukuran input.
- **O(n)**: Kompleksitas linear. Waktu eksekusi atau ruang yang digunakan berbanding lurus dengan ukuran input.
- **O(n²)**: Kompleksitas kuadratik. Waktu eksekusi atau ruang yang digunakan berbanding lurus dengan kuadrat dari ukuran input.
- **O(log n)**: Kompleksitas logaritmik. Waktu eksekusi atau ruang yang digunakan berbanding lurus dengan logaritma dari ukuran input.

#### Contoh Kompleksitas
Berikut adalah contoh kode C++ untuk memahami berbagai kompleksitas waktu:

```cpp
#include <iostream>
using namespace std;

// O(1) - Kompleksitas konstan
int getFirstElement(int arr[], int size) {
    return arr[0];
}

// O(n) - Kompleksitas linear
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// O(n²) - Kompleksitas kuadratik
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// O(log n) - Kompleksitas logaritmik
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 6, 8, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "First element: " << getFirstElement(arr, size) << endl; // O(1)

    int target = 10;
    int index = linearSearch(arr, size, target); // O(n)
    cout << "Linear search: Element found at index " << index << endl;

    int arr2[] = {64, 25, 12, 22, 11};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, size2); // O(n²)
    cout << "Bubble sorted array: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int sortedArr[] = {3, 6, 8, 10, 15, 20};
    int sortedSize = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int bsIndex = binarySearch(sortedArr, sortedSize, target); // O(log n)
    cout << "Binary search: Element found at index " << bsIndex << endl;

    return 0;
}
```

#### Studi Kasus Sederhana: Perbandingan Algoritma Sorting (Bubble Sort vs. Quick Sort)

1. **Bubble Sort**
   - Bubble Sort adalah algoritma sorting sederhana dengan kompleksitas waktu rata-rata dan terburuk O(n²).
   - Prosesnya melibatkan iterasi berulang melalui list, membandingkan elemen yang berdekatan, dan menukar mereka jika berada dalam urutan yang salah.
   
2. **Quick Sort**
   - Quick Sort adalah algoritma sorting yang lebih efisien dengan kompleksitas waktu rata-rata O(n log n) dan kompleksitas terburuk O(n²) jika pivot dipilih dengan buruk.
   - Prosesnya melibatkan pemilihan elemen pivot, partisi list di sekitar pivot, dan kemudian secara rekursif menerapkan algoritma pada sublist yang dihasilkan.

Berikut adalah implementasi Bubble Sort dan Quick Sort dalam C++:

```cpp
#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int bubbleArr[] = {64, 34, 25, 12, 22, 11, 90};
    int bubbleSize = sizeof(bubbleArr) / sizeof(bubbleArr[0]);
    bubbleSort(bubbleArr, bubbleSize);
    cout << "Bubble sorted array: ";
    for (int i = 0; i < bubbleSize; i++) {
        cout << bubbleArr[i] << " ";
    }
    cout << endl;

    int quickArr[] = {10, 7, 8, 9, 1, 5};
    int quickSize = sizeof(quickArr) / sizeof(quickArr[0]);
    quickSort(quickArr, 0, quickSize - 1);
    cout << "Quick sorted array: ";
    for (int i = 0; i < quickSize; i++) {
        cout << quickArr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

`Dalam contoh ini, Bubble Sort melakukan banyak operasi pertukaran dan memerlukan iterasi berulang melalui array, menjadikannya lambat untuk input besar. Sebaliknya, Quick Sort lebih efisien untuk sebagian besar kasus karena menggunakan teknik divide-and-conquer untuk mempartisi dan mengurutkan elemen lebih cepat.`

### Latihan :

```cpp
#include <iostream>
using namespace std;

// O(1) complexity
void constantTimeOperation(int n) {
    cout << "This is a constant time operation." << endl;
}

// O(n) complexity
void linearTimeOperation(int n) {
    for (int i = 0; i < n; i++) {
        cout << "This is a linear time operation." << endl;
    }
}

// O(n^2) complexity
void quadraticTimeOperation(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "This is a quadratic time operation." << endl;
        }
    }
}

int main() {
    int n = 5;
    constantTimeOperation(n);
    linearTimeOperation(n);
    quadraticTimeOperation(n);
    return 0;
}

```
