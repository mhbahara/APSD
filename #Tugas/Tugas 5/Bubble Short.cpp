#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() (
  int n;

  cout << "Masukkan panjang array: ";
  cin >> n;

  int arr[n];
  cout << "Masukkan elemen-elemen array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  cout << "Array sebelum diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubbleSort(arr, n);
  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
