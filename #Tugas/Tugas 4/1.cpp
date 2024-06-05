#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int n = 2, total = 0;
    do {
        cout << n;
        total += n;
        n += 2;
            if (n <= 20) {
            cout << " + ";
            }

            else {
            cout << "";
            }
            
    }   
            while (n <= 20);
            cout << " = " << total;

    return 0;
}