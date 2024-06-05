#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int n = 1, total = 0;
    do {
        cout << n;
        total += n;
        n += 2;
            if (n <= 19) {
            cout << " + ";
            }

            else {
            cout << "";
            }
            
    }   
            while (n <= 19);
            cout << " = " << total;

    return 0;
}