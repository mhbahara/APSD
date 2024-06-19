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

## 2. Array

### 1. Array

#### Definisi dan Karakteristik Array
Array adalah struktur data yang menyimpan elemen-elemen dengan tipe data yang sama dalam urutan yang bersebelahan. Setiap elemen dalam array dapat diakses dengan menggunakan indeks numerik, di mana indeks pertama dimulai dari 0. Karakteristik utama array adalah:
- Memiliki ukuran tetap yang ditentukan saat deklarasi.
- Elemen-elemen array disimpan secara bersebelahan di memori.

#### Deklarasi, Inisialisasi, dan Akses Elemen dalam Array
Di C++, array dapat dideklarasikan dan diinisialisasi dengan berbagai cara. Berikut adalah contoh deklarasi, inisialisasi, dan akses elemen dalam array:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array
    int arr[5] = {10, 20, 30, 40, 50};

    // Akses elemen dalam array
    cout << "Elemen pertama: " << arr[0] << endl;
    cout << "Elemen kedua: " << arr[1] << endl;

    // Mengubah nilai elemen dalam array
    arr[2] = 100;
    cout << "Elemen ketiga setelah perubahan: " << arr[2] << endl;

    return 0;
}
```

#### Operasi Dasar: Penambahan, Penghapusan, Pencarian, dan Pengurutan Elemen
Operasi dasar pada array mencakup penambahan, penghapusan, pencarian, dan pengurutan elemen. Berikut adalah contoh implementasi beberapa operasi dasar:

```cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr, size);

    bubbleSort(arr, size);
    cout << "Array setelah diurutkan: ";
    printArray(arr, size);

    int target = 22;
    int index = searchElement(arr, size, target);
    if (index != -1) {
        cout << "Elemen " << target << " ditemukan pada indeks " << index << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan" << endl;
    }

    return 0;
}
```

### 2. Implementasi Array

#### Array Statis vs. Dinamis
- **Array Statis**: Ukurannya ditentukan saat deklarasi dan tidak dapat diubah. Contoh:
  ```cpp
  int arr[5];
  ```
- **Array Dinamis**: Ukurannya dapat diubah selama waktu eksekusi menggunakan operator `new` dan `delete` di C++. Contoh:
  ```cpp
  int* arr = new int[5];
  // ... penggunaan array dinamis ...
  delete[] arr;  // Menghapus array dari memori
  ```

#### Keuntungan dan Kelemahan Penggunaan Array
- **Keuntungan**:
  - Akses elemen cepat melalui indeks.
  - Struktur data sederhana dan mudah digunakan.
- **Kelemahan**:
  - Ukuran tetap pada array statis membuatnya kurang fleksibel.
  - Penambahan dan penghapusan elemen memerlukan pergeseran elemen yang lain, yang bisa memakan waktu.

## 3. String
### 1. String
#### Definisi String dan Karakteristiknya
String adalah array dari karakter-karakter yang diakhiri dengan karakter null ('\0'). Di C++, string dapat diimplementasikan menggunakan array karakter atau menggunakan kelas `std::string` dari library standar.

#### Operasi Dasar pada String: Penggabungan, Pemotongan, Pencarian Substring
Berikut adalah beberapa operasi dasar pada string menggunakan `std::string` di C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi string
    string str1 = "Hello";
    string str2 = "World";

    // Penggabungan string
    string str3 = str1 + " " + str2;
    cout << "Hasil penggabungan: " << str3 << endl;

    // Pemotongan string
    string substr = str3.substr(0, 5);  // Mengambil 5 karakter pertama
    cout << "Substring: " << substr << endl;

    // Pencarian substring
    size_t found = str3.find("World");
    if (found != string::npos) {
        cout << "'World' ditemukan pada indeks: " << found << endl;
    } else {
        cout << "'World' tidak ditemukan" << endl;
    }

    return 0;
}
```

#### Fungsi-Fungsi Manipulasi String dalam Bahasa Pemrograman (misal: C++)
Fungsi-fungsi manipulasi string dalam C++ termasuk:

- **length()**: Mengembalikan panjang string.
- **substr(pos, len)**: Mengambil substring dari posisi `pos` sepanjang `len`.
- **find(str)**: Mencari substring `str` dan mengembalikan indeks awal dari substring tersebut, atau `string::npos` jika tidak ditemukan.
- **append(str)**: Menambahkan string `str` ke akhir string yang ada.
- **erase(pos, len)**: Menghapus `len` karakter mulai dari posisi `pos`.

Contoh penggunaan fungsi-fungsi tersebut dapat dilihat dalam contoh di atas. 


### Latihan

```cpp
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk membalik string
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

// Fungsi untuk menggabungkan dua string
string concatenateStrings(string str1, string str2) {
    return str1 + str2;
}

int main() {
    // Array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // String
    string str = "hello";
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reverseString(str) << endl;

    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated string: " << concatenateStrings(str1, str2) << endl;

    return 0;
}

```

## 4. Linked List

### 1. Single Linked List

#### Definisi dan Karakteristik Single Linked List
Single Linked List adalah struktur data linear yang terdiri dari sekumpulan node yang terhubung secara berurutan. Setiap node berisi data dan pointer yang menunjuk ke node berikutnya dalam daftar. Karakteristik utama dari single linked list adalah:
- Node terakhir menunjuk ke null.
- Akses ke elemen dalam linked list dilakukan secara berurutan mulai dari node pertama (head).

#### Node: Struktur Node dengan Data dan Pointer ke Node Berikutnya
Struktur node dalam single linked list terdiri dari dua komponen:
- Data: Menyimpan nilai elemen.
- Pointer (next): Menyimpan alamat node berikutnya.

Berikut adalah contoh definisi struktur node dalam C++:

```cpp
struct Node {
    int data;
    Node* next;
};
```

#### Operasi Dasar: Penambahan, Penghapusan, dan Pencarian Elemen

**Penambahan Elemen**:

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
```

**Penghapusan Elemen**:

```cpp
void deleteNode(Node*& head, int key) {
    if (!head) return;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != key) {
        temp = temp->next;
    }
    if (temp->next) {
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}
```

**Pencarian Elemen**:

```cpp
Node* search(Node* head, int key) {
    Node* temp = head;
    while (temp) {
        if (temp->data == key) return temp;
        temp = temp->next;
    }
    return nullptr;
}
```

### 2. Double Linked List

#### Definisi dan Karakteristik Double Linked List
Double Linked List adalah struktur data linear di mana setiap node memiliki dua pointer, satu menunjuk ke node berikutnya dan satu lagi menunjuk ke node sebelumnya. Karakteristik utama dari double linked list adalah:
- Node pertama (head) memiliki pointer sebelumnya (prev) yang menunjuk ke null.
- Node terakhir (tail) memiliki pointer berikutnya (next) yang menunjuk ke null.
- Memungkinkan traversal dua arah (maju dan mundur).

#### Node: Struktur Node dengan Pointer ke Node Berikutnya dan Sebelumnya
Struktur node dalam double linked list terdiri dari tiga komponen:
- Data: Menyimpan nilai elemen.
- Pointer (next): Menyimpan alamat node berikutnya.
- Pointer (prev): Menyimpan alamat node sebelumnya.

Berikut adalah contoh definisi struktur node dalam C++:

```cpp
struct Node {
    int data;
    Node* next;
    Node* prev;
};
```

#### Operasi Dasar: Penambahan, Penghapusan, dan Pencarian Elemen

**Penambahan Elemen**:

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
```

**Penghapusan Elemen**:

```cpp
void deleteNode(Node*& head, int key) {
    if (!head) return;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp && temp->data != key) {
        temp = temp->next;
    }
    if (temp) {
        temp->prev->next = temp->next;
        if (temp->next) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
}
```

**Pencarian Elemen**:

```cpp
Node* search(Node* head, int key) {
    Node* temp = head;
    while (temp) {
        if (temp->data == key) return temp;
        temp = temp->next;
    }
    return nullptr;
}
```

### 3. Circular Linked List

#### Definisi dan Karakteristik Circular Linked List
Circular Linked List adalah varian dari linked list di mana node terakhir menunjuk kembali ke node pertama, sehingga membentuk lingkaran. Circular linked list dapat berupa single atau double linked list. Karakteristik utamanya adalah:
- Tidak ada node yang menunjuk ke null.
- Memungkinkan traversal dari node mana pun tanpa batas.

#### Implementasi Circular Single dan Double Linked List
Berikut adalah implementasi dasar circular single dan double linked list:

**Circular Single Linked List**:

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
```

**Circular Double Linked List**:

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr, nullptr};
    if (!head) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = head;
        head->prev = newNode;
    }
}
```

#### Keuntungan dan Aplikasi Circular Linked List
**Keuntungan**:
- Memungkinkan traversal tanpa batas dari node mana pun.
- Efisien untuk struktur data yang memerlukan iterasi siklik, seperti antrian siklik atau aplikasi permainan.

**Aplikasi**:
- Round-Robin Scheduling dalam sistem operasi.
- Implementasi buffer melingkar (circular buffer) dalam aplikasi streaming.
- Struktur data permainan yang memerlukan traversal lingkaran, seperti papan permainan.


### Latihan

```cpp
#include <iostream>
using namespace std;

// Definisi Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen di awal
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Fungsi untuk menghapus elemen
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = nullptr;
    
    if (temp != nullptr && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

// Fungsi untuk mencetak linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    cout << "Linked list: ";
    printList(head);

    deleteNode(&head, 3);
    cout << "Linked list after deletion: ";
    printList(head);

    return 0;
}

```
## 5. Linked List (Lanjutan)

### 1. Implementasi Lanjutan Single Linked List

#### Traversing: Melakukan Iterasi Melalui Linked List
Traversing adalah proses iterasi melalui elemen-elemen linked list dari awal hingga akhir.

```cpp
void traverse(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
```

#### Reverse: Membalik Linked List
Membalik linked list adalah proses mengubah urutan node sehingga node terakhir menjadi node pertama dan sebaliknya.

```cpp
void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
```

#### Merge: Menggabungkan Dua Linked List
Menggabungkan dua linked list adalah proses menghubungkan dua linked list menjadi satu.

```cpp
Node* mergeLists(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    if (head1->data < head2->data) {
        head1->next = mergeLists(head1->next, head2);
        return head1;
    } else {
        head2->next = mergeLists(head1, head2->next);
        return head2;
    }
}
```

### 2. Operasi Lanjutan pada Double Linked List

#### Insertion Sort: Mengurutkan Elemen dalam Double Linked List
Insertion sort adalah algoritma pengurutan yang membangun daftar yang diurutkan satu per satu dengan menyisipkan elemen di posisi yang sesuai.

```cpp
void insertionSort(Node*& head) {
    if (!head) return;
    Node* sorted = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        if (!sorted || sorted->data >= current->data) {
            current->next = sorted;
            if (sorted) sorted->prev = current;
            sorted = current;
        } else {
            Node* temp = sorted;
            while (temp->next != nullptr && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            if (temp->next != nullptr) temp->next->prev = current;
            temp->next = current;
            current->prev = temp;
        }
        current = next;
    }
    head = sorted;
}
```

#### Deletion by Value: Menghapus Node Berdasarkan Nilai Tertentu
Penghapusan node berdasarkan nilai tertentu adalah proses menghapus node yang mengandung nilai tertentu dari linked list.

```cpp
void deleteByValue(Node*& head, int value) {
    if (!head) return;
    Node* current = head;
    while (current != nullptr && current->data != value) {
        current = current->next;
    }
    if (current == nullptr) return;
    if (current->prev != nullptr) current->prev->next = current->next;
    if (current->next != nullptr) current->next->prev = current->prev;
    if (current == head) head = current->next;
    delete current;
}
```

#### Implementation in Different Languages: Perbandingan Implementasi dalam C++, Java, dan Python

**C++ Implementation**:
C++ menyediakan kontrol manual atas memori menggunakan pointer.

```cpp
struct Node {
    int data;
    Node* next;
    Node* prev;
};
```

**Java Implementation**:
Java memiliki pengelolaan memori otomatis dan menggunakan referensi sebagai gantinya.

```java
class Node {
    int data;
    Node next;
    Node prev;

    Node(int data) {
        this.data = data;
    }
}
```

**Python Implementation**:
Python lebih fleksibel dan memiliki pengelolaan memori otomatis.

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None
```

### 3. Circular Linked List Applications

#### Josephus Problem: Contoh Aplikasi Circular Linked List
Josephus Problem adalah masalah komputasi teoritis yang sering digunakan untuk memodelkan antrian melingkar.

```cpp
int josephus(int n, int k) {
    Node* head = new Node{1, nullptr};
    Node* prev = head;
    for (int i = 2; i <= n; i++) {
        Node* newNode = new Node{i, head};
        prev->next = newNode;
        prev = newNode;
    }
    prev->next = head;

    Node* ptr1 = head;
    Node* ptr2 = head;
    while (ptr1->next != ptr1) {
        int count = 1;
        while (count != k) {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
            count++;
        }
        ptr2->next = ptr1->next;
        delete ptr1;
        ptr1 = ptr2->next;
    }
    return ptr1->data;
}
```

#### Round-Robin Scheduling: Aplikasi dalam Sistem Operasi
Round-Robin Scheduling adalah algoritma penjadwalan yang sering digunakan dalam sistem operasi untuk memastikan setiap proses mendapatkan waktu eksekusi yang adil.

```cpp
struct Process {
    int id;
    int burstTime;
    Process* next;
};

void roundRobinScheduling(Process* head, int quantum) {
    Process* temp = head;
    while (temp != nullptr) {
        if (temp->burstTime > quantum) {
            temp->burstTime -= quantum;
            std::cout << "Process " << temp->id << " executed for " << quantum << " units." << std::endl;
        } else {
            std::cout << "Process " << temp->id << " executed for " << temp->burstTime << " units and finished." << std::endl;
            temp->burstTime = 0;
        }
        temp = temp->next;
        if (temp == nullptr) temp = head;
    }
}
```

#### Implementation and Comparison: Implementasi dan Perbandingan dengan Linked List Lainnya
Circular linked list dapat dibandingkan dengan linked list lainnya dalam hal kompleksitas dan aplikasi.

**Implementasi Circular Linked List**:

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, head};
    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
```

**Keuntungan Circular Linked List**:
- Memungkinkan iterasi tanpa batas dari node mana pun.
- Efisien untuk struktur data yang memerlukan iterasi siklik.

**Perbandingan dengan Linked List Lainnya**:
- **Single Linked List**: Lebih sederhana dan efisien dalam penggunaan memori.
- **Double Linked List**: Memungkinkan traversal dua arah, tetapi memerlukan lebih banyak memori.
- **Circular Linked List**: Memungkinkan iterasi siklik, tetapi lebih kompleks dalam implementasi.

### Latihan

```cpp
#include <iostream>
using namespace std;

// Definisi Node
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Fungsi untuk menambahkan elemen di awal
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = nullptr;

    if ((*head_ref) != nullptr)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

// Fungsi untuk menghapus node berdasarkan nilai
void deleteNode(Node** head_ref, Node* del) {
    if (*head_ref == nullptr || del == nullptr) return;

    if (*head_ref == del)
        *head_ref = del->next;

    if (del->next != nullptr)
        del->next->prev = del->prev;

    if (del->prev != nullptr)
        del->prev->next = del->next;

    delete del;
}

// Fungsi untuk mencetak linked list dari depan
void printList(Node* node) {
    Node* last = nullptr;
    cout << "Traversal in forward direction: ";
    while (node != nullptr) {
        cout << node->data << " ";
        last = node;
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    cout << "Doubly linked list: ";
    printList(head);

    deleteNode(&head, head->next);
    cout << "Doubly linked list after deletion: ";
    printList(head);

    return 0;
}

```

## 6. Stack

### 1. Stack

#### Definisi dan Karakteristik Stack
Stack adalah struktur data linear yang mengikuti prinsip LIFO (Last In, First Out). Artinya, elemen yang terakhir dimasukkan adalah elemen yang pertama dikeluarkan.

#### Operasi Dasar pada Stack
1. **Push**: Menambahkan elemen ke puncak stack.
2. **Pop**: Menghapus elemen dari puncak stack.
3. **Peek**: Mengakses elemen di puncak stack tanpa menghapusnya.
4. **isEmpty**: Memeriksa apakah stack kosong.

#### Implementasi Stack Menggunakan Array

```cpp
#include <iostream>
#define MAX 1000

class Stack {
    int top;

public:
    int arr[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        std::cout << "Stack Overflow\n";
        return false;
    } else {
        arr[++top] = x;
        std::cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow\n";
        return 0;
    } else {
        int x = arr[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        std::cout << "Stack is Empty\n";
        return 0;
    } else {
        int x = arr[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << s.pop() << " Popped from stack\n";
    return 0;
}
```

#### Implementasi Stack Menggunakan Linked List

```cpp
#include <iostream>

class StackNode {
public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data) {
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = nullptr;
    return stackNode;
}

bool isEmpty(StackNode* root) {
    return !root;
}

void push(StackNode*& root, int data) {
    StackNode* stackNode = newNode(data);
    stackNode->next = root;
    root = stackNode;
    std::cout << data << " pushed to stack\n";
}

int pop(StackNode*& root) {
    if (isEmpty(root)) {
        std::cout << "Stack Underflow\n";
        return 0;
    }
    StackNode* temp = root;
    root = root->next;
    int popped = temp->data;
    delete temp;
    return popped;
}

int peek(StackNode* root) {
    if (isEmpty(root)) {
        std::cout << "Stack is Empty\n";
        return 0;
    }
    return root->data;
}

int main() {
    StackNode* root = nullptr;
    push(root, 10);
    push(root, 20);
    push(root, 30);
    std::cout << pop(root) << " popped from stack\n";
    return 0;
}
```

#### Aplikasi Stack
1. **Evaluasi Ekspresi**: Evaluasi ekspresi infix, postfix, dan prefix.
2. **Undo/Redo Functionality**: Implementasi operasi undo dan redo dalam aplikasi.

## 7. Queue

### 1. Queue

#### Definisi dan Karakteristik Queue
Queue adalah struktur data linear yang mengikuti prinsip FIFO (First In, First Out). Artinya, elemen yang pertama dimasukkan adalah elemen yang pertama dikeluarkan.

#### Operasi Dasar pada Queue
1. **Enqueue**: Menambahkan elemen ke belakang queue.
2. **Dequeue**: Menghapus elemen dari depan queue.
3. **Front**: Mengakses elemen di depan queue tanpa menghapusnya.
4. **Rear**: Mengakses elemen di belakang queue tanpa menghapusnya.
5. **isEmpty**: Memeriksa apakah queue kosong.

#### Implementasi Queue Menggunakan Array

```cpp
#include <iostream>
#define MAX 1000

class Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;

public:
    Queue(unsigned capacity);
    bool enqueue(int item);
    int dequeue();
    int getFront();
    int getRear();
    bool isEmpty();
};

Queue::Queue(unsigned capacity) {
    this->capacity = capacity;
    front = size = 0;
    rear = capacity - 1;
    array = new int[capacity];
}

bool Queue::enqueue(int item) {
    if (size == capacity) {
        std::cout << "Queue Overflow\n";
        return false;
    }
    rear = (rear + 1) % capacity;
    array[rear] = item;
    size++;
    std::cout << item << " enqueued to queue\n";
    return true;
}

int Queue::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue Underflow\n";
        return -1;
    }
    int item = array[front];
    front = (front + 1) % capacity;
    size--;
    return item;
}

int Queue::getFront() {
    if (isEmpty()) return -1;
    return array[front];
}

int Queue::getRear() {
    if (isEmpty()) return -1;
    return array[rear];
}

bool Queue::isEmpty() {
    return (size == 0);
}

int main() {
    Queue queue(1000);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << queue.dequeue() << " dequeued from queue\n";
    return 0;
}
```

#### Implementasi Queue Menggunakan Linked List

```cpp
#include <iostream>

class QueueNode {
public:
    int data;
    QueueNode* next;
};

class Queue {
    QueueNode *front, *rear;

public:
    Queue() { front = rear = nullptr; }
    void enqueue(int data);
    int dequeue();
    int getFront();
    int getRear();
    bool isEmpty();
};

void Queue::enqueue(int data) {
    QueueNode* temp = new QueueNode();
    temp->data = data;
    temp->next = nullptr;
    if (rear == nullptr) {
        front = rear = temp;
        std::cout << data << " enqueued to queue\n";
        return;
    }
    rear->next = temp;
    rear = temp;
    std::cout << data << " enqueued to queue\n";
}

int Queue::dequeue() {
    if (front == nullptr) {
        std::cout << "Queue Underflow\n";
        return -1;
    }
    QueueNode* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    int item = temp->data;
    delete temp;
    return item;
}

int Queue::getFront() {
    if (front == nullptr) return -1;
    return front->data;
}

int Queue::getRear() {
    if (rear == nullptr) return -1;
    return rear->data;
}

bool Queue::isEmpty() {
    return front == nullptr;
}

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << queue.dequeue() << " dequeued from queue\n";
    return 0;
}
```

#### Aplikasi Queue
1. **Sistem Antrian**: Digunakan dalam sistem antrian seperti antrian di bank atau antrian tiket.
2. **Penjadwalan Tugas**: Digunakan dalam penjadwalan tugas dalam sistem operasi.
3. **Breadth-First Search (BFS)**: Digunakan dalam algoritma pencarian graf untuk menjelajahi node secara level-order.

### 3. Variasi Queue

#### Circular Queue: Definisi dan Implementasi
Circular queue adalah variasi queue yang memungkinkan penggunaan ruang yang efisien dengan menghubungkan ujung belakang ke ujung depan, sehingga membentuk lingkaran.

```cpp
class CircularQueue {
    int front, rear, size;
    unsigned capacity;
    int* array;

public:
    CircularQueue(unsigned capacity);
    bool enqueue(int item);
    int dequeue();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
};

CircularQueue::CircularQueue(unsigned capacity) {
    this->capacity = capacity;
    front = size = 0;
    rear = capacity - 1;
    array = new int[capacity];
}

bool CircularQueue::enqueue(int item) {
    if (isFull()) {
        std::cout << "Queue Overflow\n";
        return false;
    }
    rear = (rear + 1) % capacity;
    array[rear] = item;
    size++;
    std::cout << item << " enqueued to queue\n";
    return true;
}

int CircularQueue::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue Underflow\n";
        return -1;
    }
    int item = array[front];
    front = (front + 1) % capacity;
    size--;
    return item;
}

int CircularQueue::getFront() {
    if (isEmpty()) return -1

;
    return array[front];
}

int CircularQueue::getRear() {
    if (isEmpty()) return -1;
    return array[rear];
}

bool CircularQueue::isEmpty() {
    return (size == 0);
}

bool CircularQueue::isFull() {
    return (size == capacity);
}

int main() {
    CircularQueue queue(1000);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << queue.dequeue() << " dequeued from queue\n";
    return 0;
}
```

#### Priority Queue: Definisi, Implementasi, dan Aplikasi
Priority queue adalah jenis queue di mana setiap elemen memiliki prioritas tertentu. Elemen dengan prioritas lebih tinggi diproses lebih dulu.

```cpp
#include <iostream>
#include <queue>
#include <vector>

struct Compare {
    bool operator()(int const& p1, int const& p2) {
        return p1 > p2; // Prioritas lebih rendah memiliki nilai lebih tinggi
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, Compare> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);

    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
```

**Aplikasi Priority Queue**:
- Penjadwalan proses dalam sistem operasi.
- Algoritma pencarian jalur terpendek seperti Dijkstra.

#### Double-ended Queue (Deque): Definisi dan Implementasi
Deque (Double-ended Queue) adalah jenis queue di mana elemen dapat ditambahkan atau dihapus dari kedua ujungnya.

```cpp
#include <deque>
#include <iostream>

int main() {
    std::deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);

    std::cout << "Front: " << dq.front() << std::endl;
    std::cout << "Back: " << dq.back() << std::endl;

    dq.pop_front();
    dq.pop_back();

    while (!dq.empty()) {
        std::cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
```

**Keuntungan Deque**:
- Fleksibilitas untuk menambah dan menghapus elemen dari kedua ujung.
- Digunakan dalam algoritma yang memerlukan antrian ganda.

Dengan memahami berbagai struktur data ini, kita dapat memilih dan menerapkan solusi yang paling efisien untuk berbagai masalah komputasi.

### Latihan

```cpp

#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    } else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}

```

### Latihan:

```cpp
#include <iostream>
using namespace std;

#define MAX 1000

class Queue {
    int front, rear, size;
    int capacity;
    int* array;

public:
    Queue(int capacity);
    ~Queue();
    void enqueue(int item);
    int dequeue();
    bool isFull();
    bool isEmpty();
    int frontElement();
    int rearElement();
};

Queue::Queue(int capacity) {
    this->capacity = capacity;
    front = size = 0;
    rear = capacity - 1;
    array = new int[this->capacity];
}

Queue::~Queue() {
    delete[] array;
}

bool Queue::isFull() {
    return (size == capacity);
}

bool Queue::isEmpty() {
    return (size == 0);
}

void Queue::enqueue(int item) {
    if (isFull())
        return;
    rear = (rear + 1) % capacity;
    array[rear] = item;
    size = size + 1;
    cout << item << " enqueued to queue\n";
}

int Queue::dequeue() {
    if (isEmpty())
        return -1;
    int item = array[front];
    front = (front + 1) % capacity;
    size = size - 1;
    return item;
}

int Queue::frontElement() {
    if (isEmpty())
        return -1;
    return array[front];
}

int Queue::rearElement() {
    if (isEmpty())
        return -1;
    return array[rear];
}

int main() {
    Queue queue(1000);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << queue.dequeue() << " dequeued from queue\n";
    cout << "Front item is " << queue.frontElement() << endl;
    cout << "Rear item is " << queue.rearElement() << endl;

    return 0;
}

```
