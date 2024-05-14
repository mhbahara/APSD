#include <stdio.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int k, l, m, n;
    
    for(k =0; k < 5; puts(""), ++k)
    {
        n = 0;
        for(l = 5; l > k; n +=2 * (l--))
        {
            if(l > k + 1) {
                printf("%d + ",2 * l);
            }
            else {
                printf("%d ",2 * l);
            }
        }
        for (m = 0; m <= k; m++) printf("");
        printf("= %d",n);
        
    }
    printf("----------\n");
    printf("110\n");

return(0);

}
