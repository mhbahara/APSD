

## 8. Tree

1. **Pengantar Tree**
   - Definisi dan karakteristik tree.
   - Terminologi: Root, leaf, parent, child, sibling, depth, height.

2. **Binary Tree**
   - Definisi dan struktur binary tree.
   - Properti binary tree: Penuh, lengkap, degenerate.
   - Traversal: Preorder, inorder, postorder.

3. **Binary Search Tree (BST)**
   - Definisi dan karakteristik BST.
   - Operasi BST: Penambahan, penghapusan, pencarian.
   - Implementasi BST dalam bahasa pemrograman.

4. **Contoh Implementasi BST**
   - Kode: Contoh kode untuk operasi dasar BST (penambahan, penghapusan, pencarian).

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

## 9. Graph

1. **Pengantar Graph**
   - Definisi dan terminologi graph: Vertex, edge, directed, undirected, weighted, unweighted.
   - Representasi graph: Adjacency matrix, adjacency list.

2. **Algoritma Pencarian Graph**
   - Depth-First Search (DFS): Konsep dan implementasi.
   - Breadth-First Search (BFS): Konsep dan implementasi.

3. **DFS dan BFS**
   - Pseudocode dan contoh implementasi DFS dan BFS dalam bahasa pemrograman.

4. **Aplikasi Graph**
   - Studi kasus: Pencarian jalur terpendek, penjadwalan, rute transportasi.

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

1. **Pengantar Hashing**
   - Konsep hashing dan hash table.
   - Fungsi hash: Definisi dan properti.

2. **Penanganan Collision**
   - Metode penanganan collision: Chaining, open addressing.
   - Implementasi chaining: Contoh kode dalam bahasa pemrograman.
   - Implementasi open addressing: Linear probing, quadratic probing, double hashing.

3. **Aplikasi Hashing**
   - Contoh aplikasi: Penyimpanan dan pencarian data, implementasi struktur data seperti set dan map.

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

## 10. Heaps

1. **Pengantar Heaps**
   - Definisi dan karakteristik heap.
   - Binary Heap: Max-Heap dan Min-Heap.

2. **Operasi pada Heap**
   -

 Operasi dasar: Insert, Extract-Max, Extract-Min.
   - Heapify: Up dan Down Heapify.

3. **Heap Sort**
   - Algoritma Heap Sort: Proses dan implementasi.

4. **Aplikasi Heap**
   - Priority Queue: Definisi dan implementasi menggunakan heap.

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
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

class MenuItem {
public:
    int id;
    string name;
    double price;

    MenuItem(int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }
};

class Order {
public:
    int orderId;
    list<MenuItem> items;

    Order(int orderId) {
        this->orderId = orderId;
    }

    void addItem(MenuItem item) {
        items.push_back(item);
    }

    double calculateTotal() {
        double total = 0;
        for (auto item : items) {
            total += item.price;
        }
        return total;
    }
};

class Restaurant {
    unordered_map<int, MenuItem> menu;
    queue<Order> orderQueue;
    int nextOrderId;

public:
    Restaurant() {
        nextOrderId = 1;
    }

    void addMenuItem(int id, string name, double price) {
        MenuItem newItem(id, name, price);
        menu[id] = newItem;
    }

    void placeOrder(list<int> itemIds) {
        Order newOrder(nextOrderId++);
        for (int id : itemIds) {
            if (menu.find(id) != menu.end()) {
                newOrder.addItem(menu[id]);
            }
        }
        orderQueue.push(newOrder);
    }

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
            cout << "- " << item.name << ": $" << item.price << endl;
        }
        cout << "Total: $" << currentOrder.calculateTotal() << endl;
    }
};

int main() {
    Restaurant myRestaurant;

    myRestaurant.addMenuItem(1, "Burger", 5.99);
    myRestaurant.addMenuItem(2, "Fries", 2.99);
    myRestaurant.addMenuItem(3, "Soda", 1.49);

    list<int> order1 = {1, 2};
    list<int> order2 = {2, 3, 1};

    myRestaurant.placeOrder(order1);
    myRestaurant.placeOrder(order2);

    myRestaurant.processOrder();
    myRestaurant.processOrder();

    return 0;
}

```

