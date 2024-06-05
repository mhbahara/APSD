#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int d, e;
    int sum;

    for(d = 1; d <= 9; d += 2) {
        sum = 1;
	    for(e = 1; e <= d; e += 2) {
            if(e != 1)
            cout << " * "; 
            cout << e;
   	        sum = sum * e;
            } cout << " = " << sum << endl;
   }

return 0;
}
