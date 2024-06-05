#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int y,z;
    int sum;

    for(y = 2; y <= 10; y += 2) {
        sum = 0;
	      for(z = 2; z <= y; z += 2) {
            if(z != 2)
            cout << " + "; 
            cout << z;
   	        sum = sum + z;
            } 
      cout << " = " << sum << endl;
   }

return 0;
}
