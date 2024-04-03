#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char before[20];
    char after[20];

    cout << "Masukkan Sembarang Kata before = ";
    cin.getline(before, 20);
    cout << "before = "<< before<< endl;
     cout << "after sebelum cpy = " << after << endl;
    /* Proses */
    strcpy(after, before);

    cout << "after setelah cpy = " << after << endl;
         cout<<strlen(before);

    return 0;
}
