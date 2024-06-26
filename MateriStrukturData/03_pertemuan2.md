

## 8. Tree

### 1. Pengantar Tree
Tree adalah struktur data hierarkis yang terdiri dari simpul (node), dengan satu simpul sebagai akar (root). Setiap simpul memiliki nol atau lebih anak (children), dan setiap simpul anak memiliki satu induk (parent). 

#### Terminologi:
- **Root**: Simpul paling atas dari tree.
- **Leaf**: Simpul tanpa anak.
- **Parent**: Simpul yang memiliki satu atau lebih anak.
- **Child**: Simpul yang merupakan keturunan langsung dari simpul lain.
- **Sibling**: Simpul yang memiliki induk yang sama.
- **Depth**: Jarak dari root ke simpul tertentu.
- **Height**: Jarak dari simpul tertentu ke leaf terjauh.

### 2. Binary Tree

#### Definisi dan Struktur Binary Tree
Binary Tree adalah tree di mana setiap simpul memiliki paling banyak dua anak yang disebut left child dan right child.

#### Properti Binary Tree:
- **Full Binary Tree**: Setiap simpul memiliki nol atau dua anak.
- **Complete Binary Tree**: Semua level kecuali mungkin level terakhir sepenuhnya terisi, dan semua simpul sejauh mungkin ke kiri.
- **Degenerate (or pathological) Tree**: Setiap simpul hanya memiliki satu anak.

#### Traversal:
- **Preorder**: Root -> Left -> Right
- **Inorder**: Left -> Root -> Right
- **Postorder**: Left -> Right -> Root

### 3. Binary Search Tree (BST)

#### Definisi dan Karakteristik BST
BST adalah binary tree di mana setiap simpul memiliki properti berikut:
- Nilai di setiap simpul lebih besar dari semua nilai di subtree kirinya.
- Nilai di setiap simpul lebih kecil dari semua nilai di subtree kanannya.

#### Operasi BST:
- **Penambahan**: Menambahkan elemen baru ke BST.
- **Penghapusan**: Menghapus elemen dari BST.
- **Pencarian**: Mencari elemen dalam BST.

### 4. Contoh Implementasi BST

#### Kode: Contoh Kode untuk Operasi Dasar BST

```cpp
#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;
    BST() : root(nullptr) {}

    void insert(int value) {
        root = insertRec(root, value);
    }

    void inorder() {
        inorderRec(root);
    }

    Node* search(int value) {
        return searchRec(root, value);
    }

    Node* deleteNode(int value) {
        return deleteRec(root, value);
    }

private:
    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else if (value > node->data) {
            node->right = insertRec(node->right, value);
        }
        return node;
    }

    void inorderRec(Node* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            std::cout << node->data << " ";
            inorderRec(node->right);
        }
    }

    Node* searchRec(Node* node, int value) {
        if (node == nullptr || node->data == value) {
            return node;
        }
        if (value < node->data) {
            return searchRec(node->left, value);
        }
        return searchRec(node->right, value);
    }

    Node* deleteRec(Node* root, int key) {
        if (root == nullptr) return root;

        if (key < root->data)
            root->left = deleteRec(root->left, key);
        else if (key > root->data)
            root->right = deleteRec(root->right, key);
        else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteRec(root->right, temp->data);
        }
        return root;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal: ";
    tree.inorder();

    std::cout << "\nSearch 40: " << (tree.search(40) != nullptr ? "Found" : "Not Found");

    tree.deleteNode(20);
    std::cout << "\nInorder traversal after deleting 20: ";
    tree.inorder();

    return 0;
}
```


### Latihan

```cpp
#include <iostream>
using namespace std;

// Definisi Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi untuk membuat node baru
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Fungsi untuk memasukkan node baru
Node* insert(Node* node, int data) {
    if (node == nullptr) return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

// Fungsi untuk mencari node
Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (root->data < key)
        return search(root->right, key);

    return search(root->left, key);
}

// Fungsi untuk melakukan inorder traversal
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal of the given tree: ";
    inorder(root);

    cout << "\nSearch for 40 in the tree: ";
    Node* result = search(root, 40);
    if (result != nullptr)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}


```
 ### Latihan 2 Transverse:
 ```cpp
 #include <iostream>
using namespace std;

// Struktur node untuk pohon biner
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Fungsi untuk preorder traversal
void preorderTraversal(Node* node) {
    if (node == nullptr) return;
    cout << node->data << " "; // Kunjungi root
    preorderTraversal(node->left); // Traverse subpohon kiri
    preorderTraversal(node->right); // Traverse subpohon kanan
}

// Fungsi untuk inorder traversal
void inorderTraversal(Node* node) {
    if (node == nullptr) return;
    inorderTraversal(node->left); // Traverse subpohon kiri
    cout << node->data << " "; // Kunjungi root
    inorderTraversal(node->right); // Traverse subpohon kanan
}

// Fungsi untuk postorder traversal
void postorderTraversal(Node* node) {
    if (node == nullptr) return;
    postorderTraversal(node->left); // Traverse subpohon kiri
    postorderTraversal(node->right); // Traverse subpohon kanan
    cout << node->data << " "; // Kunjungi root
}

// Fungsi utama
int main() {
    // Membuat pohon biner sederhana
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
```


## 9. Graph

### 1. Pengantar Graph

#### Definisi dan Terminologi Graph
Graph adalah struktur data yang terdiri dari simpul (vertex) dan sisi (edge) yang menghubungkan simpul-simpul tersebut.

#### Terminologi:
- **Vertex**: Titik atau simpul dalam graph.
- **Edge**: Garis yang menghubungkan dua simpul.
- **Directed Graph**: Graph di mana tepi memiliki arah.
- **Undirected Graph**: Graph di mana tepi tidak memiliki arah.
- **Weighted Graph**: Graph di mana setiap tepi memiliki bobot.
- **Unweighted Graph**: Graph di mana tepi tidak memiliki bobot.

#### Representasi Graph:
- **Adjacency Matrix**: Matriks 2D untuk merepresentasikan graph.
- **Adjacency List**: Array of lists untuk merepresentasikan graph.

### 2. Algoritma Pencarian Graph

#### Depth-First Search (DFS)
DFS adalah algoritma pencarian yang menelusuri sepanjang satu cabang ke bawah sebelum kembali dan menelusuri cabang lain.

```cpp
#include <iostream>
#include <list>

class Graph {
    int V;
    std::list<int>* adj;

    void DFSUtil(int v, bool visited[]);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[]) {
    visited[v] = true;
    std::cout << v << " ";

    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

void Graph::DFS(int v) {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    DFSUtil(v, visited);
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);

    return 0;
}
```

#### Breadth-First Search (BFS)
BFS adalah algoritma pencarian yang menelusuri level per level dari node mulai dari root.

```cpp
#include <iostream>
#include <list>

class Graph {
    int V;
    std::list<int>* adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::BFS(int s) {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    std::list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty()) {
        s = queue.front();
        std::cout << s << " ";
        queue.pop_front();

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Breadth First Traversal (starting from vertex 2): ";
    g.BFS(2);

    return 0;
}
```

### 3. Aplikasi Graph

#### Studi Kasus: Pencarian Jalur Terpendek, Penjadwalan, Rute Transportasi
Graph digunakan dalam berbagai aplikasi seperti:
- **Pencarian Jalur Terpendek**: Algoritma Dijkstra untuk menemukan jalur terpendek antara dua simpul.
- **Penjadwalan**: Mengatur urutan tugas atau proses.
- **Rute Transportasi**: Menentukan rute terpendek atau tercepat untuk perjalanan.


### Latihan:
```cpp
// Depth-First Search (DFS) dan Breadth-First Search (BFS)
#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V;
    list<int>* adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
    void BFS(int s);
    void DFSUtil(int v, bool visited[]);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[]) {
    visited[v] = true;
    cout << v << " ";

    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

void Graph::DFS(int v) {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
    delete[] visited;
}

void Graph::BFS(int s) {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    queue<int> queue;
    visited[s] = true;
    queue.push(s);

    while (!queue.empty()) {
        s = queue.front();
        cout << s << " ";
        queue.pop();

        for (auto adjecent: adj[s]) {
            if (!visited[adjecent]) {
                visited[adjecent] = true;
                queue.push(adjecent);
            }
        }
    }
    delete[] visited;
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);

    cout << "\nBreadth First Traversal (starting from vertex 2): ";
    g.BFS(2);

    return 0;
}
```
## 9. Hashing

### 1. Pengantar Hashing
Hashing adalah teknik untuk memetakan data ke lokasi tertentu dalam struktur data menggunakan fungsi hash. Struktur data yang umum digunakan untuk implementasi hashing adalah hash table.

- **Fungsi Hash**: Fungsi yang mengambil input (atau kunci) dan mengembalikan indeks (lokasi dalam array) di mana data harus disimpan.
- **Properti Fungsi Hash**: 
  - Deterministik: Input yang sama selalu menghasilkan output yang sama.
  - Distribusi yang baik: Sebisa mungkin mendistribusikan kunci secara merata di seluruh ruang hash.
  - Efisien: Menghasilkan nilai hash dengan cepat.

### 2. Penanganan Collision
Collision terjadi ketika dua kunci yang berbeda menghasilkan nilai hash yang sama. Beberapa metode untuk menangani collision adalah:

- **Chaining**: Setiap slot dalam hash table berisi list yang menyimpan semua elemen yang di-hash ke slot tersebut.
  
  ```cpp
  #include <iostream>
  #include <list>
  #include <iterator>

  class HashTable {
  private:
      static const int hashGroups = 10;
      std::list<int> table[hashGroups];
  public:
      bool isEmpty() const;
      int hashFunction(int key);
      void insertItem(int key);
      void removeItem(int key);
      void printTable();
  };

  bool HashTable::isEmpty() const {
      int sum{};
      for (int i{}; i < hashGroups; i++) {
          sum += table[i].size();
      }
      return sum == 0;
  }

  int HashTable::hashFunction(int key) {
      return key % hashGroups;
  }

  void HashTable::insertItem(int key) {
      int hashValue = hashFunction(key);
      table[hashValue].emplace_back(key);
  }

  void HashTable::removeItem(int key) {
      int hashValue = hashFunction(key);
      auto& cell = table[hashValue];
      auto bItr = std::begin(cell);
      bool keyExists = false;
      for (; bItr != std::end(cell); bItr++) {
          if (*bItr == key) {
              keyExists = true;
              bItr = cell.erase(bItr);
              break;
          }
      }
      if (!keyExists) {
          std::cout << "Key not found.\n";
      }
  }

  void HashTable::printTable() {
      for (int i{}; i < hashGroups; i++) {
          if (!table[i].empty()) {
              std::cout << "Group " << i << ": ";
              for (auto x : table[i]) {
                  std::cout << x << " ";
              }
              std::cout << std::endl;
          }
      }
  }

  int main() {
      HashTable ht;
      ht.insertItem(905);
      ht.insertItem(201);
      ht.insertItem(322);
      ht.insertItem(309);
      ht.insertItem(458);
      ht.insertItem(172);
      ht.printTable();
      return 0;
  }
  ```

- **Open Addressing**: Tidak menyimpan list, tetapi mencari slot kosong dalam array untuk menyimpan elemen yang mengalami collision.
  - **Linear Probing**: Jika collision terjadi, mencari slot berikutnya yang kosong secara linear.
  - **Quadratic Probing**: Jika collision terjadi, mencari slot berikutnya yang kosong dengan kuadrat dari index saat ini.
  - **Double Hashing**: Menggunakan fungsi hash kedua untuk menentukan jarak pencarian.

### 3. Aplikasi Hashing
- **Penyimpanan dan Pencarian Data**: Digunakan dalam struktur data seperti set dan map untuk penyimpanan dan pencarian yang cepat.
- **Implementasi Struktur Data**: Banyak digunakan dalam implementasi set, map, dan dictionary di berbagai bahasa pemrograman.


## 10. Heaps

### 1. Pengantar Heaps
Heap adalah struktur data berbasis tree yang memenuhi properti heap:
- **Max-Heap**: Setiap simpul adalah lebih besar atau sama dengan anak-anaknya.
- **Min-Heap**: Setiap simpul adalah lebih kecil atau sama dengan anak-anaknya.

#### contoh:

```cpp
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    int extractMax() {
        if (heap.size() == 0) return -1;
        int max = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return max;
    }

    void printHeap() {
        for (int i : heap) cout << i << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap maxHeap;
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(40);

    cout << "Heap: ";
    maxHeap.printHeap();

    cout << "Extract Max: " << maxHeap.extractMax() << endl;
    cout << "Heap after extraction: ";
    maxHeap.printHeap();

    return 0;
}

```

### 2. Operasi pada Heap
- **Insert**: Menambahkan elemen baru ke dalam heap.
- **Extract-Max/Extract-Min**: Menghapus dan mengembalikan elemen terbesar (untuk Max-Heap) atau terkecil (untuk Min-Heap).
- **Heapify**: Menyesuaikan posisi elemen untuk memenuhi properti heap setelah operasi insert atau delete.

#### Contoh:

```cpp
// Insert and Extract-Max are shown in the previous example

int main() {
    MaxHeap maxHeap;
    maxHeap.insert(50);
    maxHeap.insert(70);
    maxHeap.insert(60);
    maxHeap.insert(80);
    maxHeap.insert(100);

    cout << "Heap: ";
    maxHeap.printHeap();

    cout << "Extract Max: " << maxHeap.extractMax() << endl;
    cout << "Heap after extraction: ";
    maxHeap.printHeap();

    return 0;
}
```

### 3. Heap Sort
Heap Sort adalah algoritma pengurutan yang menggunakan heap untuk mengurutkan elemen. Prosesnya adalah:
1. Bangun Max-Heap dari array.
2. Tukar elemen terbesar (root) dengan elemen terakhir dari array dan kurangi ukuran heap.
3. Heapify ulang heap.

#### Contoh :

```cpp
#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    heapSort(arr);

    cout << "Sorted array: ";
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
```

### 4. Aplikasi Heap
- **Priority Queue**: Queue di mana setiap elemen memiliki prioritas. Elemen dengan prioritas tertinggi dihapus pertama kali.

#### contoh:

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
```

### Latihan
```cpp
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}

```


## 11. Advanced Topics

### 1. B-Trees dan AVL Trees

#### B-Trees
- **Definisi dan Karakteristik**: B-Tree adalah struktur data tree yang umum digunakan dalam sistem file dan database karena efisiensinya dalam operasi insert, delete, dan search.
- **Operasi pada B-Trees**: Insert dan delete melibatkan pembagian (split) dan penggabungan (merge) node untuk menjaga properti B-Tree.

#### Contoh :

```cpp
#include <iostream>
using namespace std;

class BTreeNode {
    int *keys;
    int t;
    BTreeNode **C;
    int n;
    bool leaf;

public:
    BTreeNode(int _t, bool _leaf);

    void insertNonFull(int k);
    void splitChild(int i, BTreeNode *y);

    void traverse() {
        int i;
        for (i = 0; i < n; i++) {
            if (leaf == false)
                C[i]->traverse();
            cout << " " << keys[i];
        }

        if (leaf == false)
            C[i]->traverse();
    }

    BTreeNode *search(int k) {
        int i = 0;
        while (i < n && k > keys[i])
            i++;

        if (keys[i] == k)
            return this;

        if (leaf == true)
            return NULL;

        return C[i]->search(k);
    }

    friend class BTree;
};

class BTree {
    BTreeNode *root;
    int t;

public:
    BTree(int _t) {
        root = NULL;
        t = _t;
    }

    void traverse() {
        if (root != NULL)
            root->traverse();
    }

    BTreeNode *search(int k) {
        return (root == NULL) ? NULL : root->search(k);
    }

    void insert(int k);
};

BTreeNode::BTreeNode(int t1, bool leaf1) {
    t = t1;
    leaf = leaf1;
    keys = new int[2 * t - 1];
    C = new BTreeNode *[2 * t];
    n = 0;
}

void BTree::insert(int k) {
    if (root == NULL) {
        root = new BTreeNode(t, true);
        root->keys[0] = k;
        root->n = 1;
    } else {
        if (root->n == 2 * t - 1) {
            BTreeNode *s = new BTreeNode(t, false);
            s->C[0] = root;
            s->splitChild(0, root);
            int i = 0;
            if (s->keys[0] < k)
                i++;
            s->C[i]->insertNonFull(k);
            root = s;
        } else
            root->insertNonFull(k);
    }
}

void BTreeNode::insertNonFull(int k) {
    int i = n - 1;

    if (leaf == true) {
        while (i >= 0 && keys[i] > k) {
            keys[i + 1] = keys[i];
            i--;
        }
        keys[i + 1] = k;
        n = n + 1;
    } else {
        while (i >= 0 && keys[i] > k)
            i--;

        if (C[i + 1]->n == 2 * t - 1) {
            splitChild(i + 1, C[i + 1]);
            if (keys[i + 1] < k)
                i++;
        }
        C[i + 1]->insertNonFull(k);
    }
}

void BTreeNode::splitChild(int i, BTreeNode *y) {
    BTreeNode *z = new BTreeNode(y->t, y->leaf);
    z->n = t - 1;

    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    if (y->leaf == false) {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    y->n = t - 1;

    for (int j = n; j >= i + 1; j--)
        C[j + 1] = C[j];

    C[i + 1] = z;

    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    keys[i] = y->keys[t - 1];

    n = n + 1;
}

int main() {
    BTree t(3);
    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);
    t.insert(30);
    t.insert(7);
    t.insert(17);

    cout << "Traversal of the constucted tree is ";
    t.traverse();

    int k = 6;
    (t.search(k) != NULL) ? cout << "\nPresent" : cout << "\nNot Present";

    k = 15;
    (t.search(k) != NULL) ? cout << "\nPresent" : cout << "\nNot Present";

    return 0;
}
```

#### AVL Trees
- **Definisi dan Karakteristik**: AVL Tree adalah binary search tree yang seimbang, di mana selisih tinggi antara subtree kiri dan kanan dari setiap node adalah tidak lebih dari satu.
- **Rotasi pada AVL Trees**: Digunakan untuk menjaga keseimbangan pohon setelah operasi insert dan delete.
  - **Single Rotation**: Rotasi kiri atau kanan.
  - **Double Rotation**: Kombinasi rotasi kiri dan kanan.

#### Contoh:
```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;
};

int height(Node* n) {
    if (n == NULL)
        return 0;
    return n->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

int getBalance(Node* n) {
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

Node* insert(Node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Preorder traversal of the constructed AVL tree is \n";
    preOrder(root);

    return 0;
}
```

### 2. Struktur Data Kompleks Lainnya

#### Trie
- **Definisi dan Aplikasi**: Trie adalah struktur data tree khusus untuk menyimpan himpunan string. Digunakan dalam aplikasi seperti autocomplete dan spell checker.

#### Contoh:
```cpp
#include <iostream>
#include <string>
using namespace std;

const int ALPHABET_SIZE = 26;

class TrieNode {
public:
    TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            children[i] = NULL;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string key) {
        TrieNode* pCrawl = root;
        for (int i = 0; i < key.length(); i++) {
            int index = key[i] - 'a';
            if (!pCrawl->children[index])
                pCrawl->children[index] = new TrieNode();
            pCrawl = pCrawl->children[index];
        }
        pCrawl->isEndOfWord = true;
    }

    bool search(string key) {
        TrieNode* pCrawl = root;
        for (int i = 0; i < key.length(); i++) {
            int index = key[i] - 'a';
            if (!pCrawl->children[index])
                return false;
            pCrawl = pCrawl->children[index];
        }
        return (pCrawl != NULL && pCrawl->isEndOfWord);
    }
};

int main() {
    string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);

    Trie trie;
    for (int i = 0; i < n; i++)
        trie.insert(keys[i]);

    trie.search("the") ? cout << "Yes\n" : cout << "No\n";
    trie.search("these") ? cout << "Yes\n" : cout << "No\n";
    trie.search("their") ? cout << "Yes\n" : cout << "No\n";
    trie.search("thaw") ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
```

#### Red-Black Tree
- **Definisi dan Karakteristik**: Red-Black Tree adalah jenis binary search tree yang seimbang di mana setiap node memiliki warna (merah atau hitam) dan aturan warna yang memastikan keseimbangan.

#### Contoh:
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> rbTree;

    rbTree.insert(10);
    rbTree.insert(20);
    rbTree.insert(15);
    rbTree.insert(25);
    rbTree.insert(30);

    cout << "Elements in Red-Black Tree: ";
    for (auto it = rbTree.begin(); it != rbTree.end(); ++it)
        cout << *it << " ";
    cout << endl;

    rbTree.erase(20);

    cout << "Elements after deletion: ";
    for (auto it = rbTree.begin(); it != rbTree.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
```

### 3. Aplikasi Struktur Data Kompleks
- **Contoh Aplikasi**: 
  - **Pengindeksan**: Digunakan dalam mesin pencari untuk mengindeks halaman web.
  - **Sistem File**: Struktur seperti B-Tree digunakan untuk mengelola file dan direktori.
  - **Database**: Struktur data seperti B-Tree dan AVL Tree digunakan dalam implementasi indeks database untuk operasi pencarian yang cepat.

### Latihan

```cpp
#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int BUCKET;
    list<int>* table;

public:
    HashTable(int V);
    void insertItem(int x);
    void deleteItem(int key);
    int hashFunction(int x) {
        return (x % BUCKET);
    }
    void displayHash();
};

HashTable::HashTable(int b) {
    this->BUCKET = b;
    table = new list<int>[BUCKET];
}

void HashTable::insertItem(int key) {
    int index = hashFunction(key);
    table[index].push_back(key);
}

void HashTable::deleteItem(int key) {
    int index = hashFunction(key);
    table[index].remove(key);
}

void HashTable::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}

int main() {
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);

    HashTable h(7);
    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

    h.deleteItem(12);

    h.displayHash();

    return 0;
}

```

## 11. Advanced Topics

1. **B-Trees dan AVL Trees**
   - Definisi dan karakteristik B-Trees.
   - Operasi pada B-Trees: Insert, delete.
   - Definisi dan karakteristik AVL Trees.
   - Rotasi pada AVL Trees: Single dan double rotation.

2. **Struktur Data Kompleks Lainnya**
   - Trie: Definisi dan aplikasi.
   - Red-Black Tree: Definisi dan karakteristik.

3. **Aplikasi Struktur Data Kompleks**
   - Contoh aplikasi: Pengindeksan, sistem file, database.

### Latihan
```cpp
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    int height;
};

int height(Node* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;
    node->height = 1;
    return node;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

int getBalance(Node* N) {
    if (N == nullptr)
        return 0;
    return height(N->left) - height(N->right);
}

Node* insert(Node* node, int key) {
    if (node == nullptr)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(Node* root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Preorder traversal of the constructed AVL tree is: ";
    preOrder(root);

    return 0;
}

```
## 12. Implementasi

Dalam studi kasus ini, kita akan mengimplementasikan sebuah sistem pengelolaan pesanan restoran menggunakan beberapa struktur data yang telah dipelajari. Kita akan menggunakan queue untuk mengelola antrean pesanan dan hash table untuk menyimpan data menu.

```cpp
#include <iostream>
#include <fstream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

class MenuItem {
public:
    int id;
    string name;
    double price;

    // Konstruktor default
    MenuItem() : id(0), name(""), price(0.0) {}

    // Konstruktor dengan parameter untuk menginisialisasi item menu
    MenuItem(int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }
};

class Order {
public:
    int orderId;
    list<MenuItem> items; // Daftar item dalam pesanan

    // Konstruktor untuk menginisialisasi pesanan dengan ID
    Order(int orderId) {
        this->orderId = orderId;
    }

    // Menambahkan item ke dalam pesanan
    void addItem(MenuItem item) {
        items.push_back(item);
    }

    // Menghitung total harga dari semua item dalam pesanan
    double calculateTotal() {
        double total = 0;
        for (auto item : items) {
            total += item.price;
        }
        return total;
    }
};

class Restaurant {
    unordered_map<int, MenuItem> menu; // Menu restoran
    queue<Order> orderQueue; // Antrian pesanan
    int nextOrderId;

    void saveMenuToFile() {
        ofstream file("menu.txt");
        if (!file) {
            cout << "Failed to open menu file for writing." << endl;
            return;
        }
        for (auto &pair : menu) {
            file << pair.second.id << "," << pair.second.name << "," << pair.second.price << endl;
        }
        file.close();
    }

    void saveOrderToFile(Order& order) {
        ofstream file("orders.txt", ios::app);
        if (!file) {
            cout << "Failed to open orders file for writing." << endl;
            return;
        }
        file << "Order #" << order.orderId << endl;
        for (auto item : order.items) {
            file << "- " << item.name << ": Rp" << item.price << endl;
        }
        file << "Total: Rp" << order.calculateTotal() << endl << endl;
        file.close();
    }

public:
    // Konstruktor untuk menginisialisasi restoran
    Restaurant() {
        nextOrderId = 1;
    }

    // Menambahkan item ke dalam menu restoran
    void addMenuItem(int id, string name, double price) {
        MenuItem newItem(id, name, price);
        menu[id] = newItem;
        cout << "Menu item added: " << name << " with price Rp" << price << endl;
        saveMenuToFile();
    }

    // Membuat pesanan baru dan menambahkannya ke antrian pesanan
    void placeOrder(list<int> itemIds) {
        if (menu.empty()) {
            cout << "Menu is empty. Please add menu items first." << endl;
            return;
        }

        Order newOrder(nextOrderId++);
        for (int id : itemIds) {
            if (menu.find(id) != menu.end()) {
                newOrder.addItem(menu[id]);
            } else {
                cout << "Item with id " << id << " not found in menu." << endl;
            }
        }
        orderQueue.push(newOrder);
        cout << "Order #" << newOrder.orderId << " placed." << endl;
        saveOrderToFile(newOrder);
    }

    // Memproses pesanan dari antrian
    void processOrder() {
        if (orderQueue.empty()) {
            cout << "No orders to process." << endl;
            return;
        }

        Order currentOrder = orderQueue.front();
        orderQueue.pop();
        cout << "Processing order #" << currentOrder.orderId << endl;
        cout << "Items:" << endl;
        for (auto item : currentOrder.items) {
            cout << "- " << item.name << ": Rp" << item.price << endl;
        }
        cout << "Total: Rp" << currentOrder.calculateTotal() << endl;
    }

    // Menampilkan menu restoran
    void displayMenu() {
        if (menu.empty()) {
            cout << "Menu is empty." << endl;
            return;
        }

        cout << "Menu:" << endl;
        for (auto &pair : menu) {
            cout << pair.second.id << ". " << pair.second.name << " - Rp" << pair.second.price << endl;
        }
    }

    // Menampilkan tagihan untuk pesanan terakhir dalam antrian
    void displayBill() {
        if (orderQueue.empty()) {
            cout << "No orders to display bill for." << endl;
            return;
        }

        Order currentOrder = orderQueue.back();
        cout << "Bill for order #" << currentOrder.orderId << endl;
        cout << "Items:" << endl;
        for (auto item : currentOrder.items) {
            cout << "- " << item.name << ": Rp" << item.price << endl;
        }
        cout << "Total: Rp" << currentOrder.calculateTotal() << endl;
    }
};

int main() {
    Restaurant myRestaurant;
    int choice;

    do {
        cout << "Restaurant Menu:" << endl;
        cout << "1. Add Menu Item" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. Process Order" << endl;
        cout << "4. Display Menu" << endl;
        cout << "5. Display Bill" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name;
            double price;
            cout << "Enter item id: ";
            cin >> id;
            cout << "Enter item name: ";
            cin.ignore(); // To ignore the newline character left by previous input
            getline(cin, name);
            cout << "Enter item price: ";
            cin >> price;
            myRestaurant.addMenuItem(id, name, price);
            break;
        }
        case 2: {
            int numItems;
            cout << "Enter number of items in the order: ";
            cin >> numItems;
            list<int> itemIds;
            for (int i = 0; i < numItems; ++i) {
                int itemId;
                cout << "Enter item id: ";
                cin >> itemId;
                itemIds.push_back(itemId);
            }
            myRestaurant.placeOrder(itemIds);
            break;
        }
        case 3:
            myRestaurant.processOrder();
            break;
        case 4:
            myRestaurant.displayMenu();
            break;
        case 5:
            myRestaurant.displayBill();
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 6);

    return 0;
}


```

