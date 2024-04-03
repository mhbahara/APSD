#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, x, y;
    cout<<"Masukan Nilai X = "; cin>>x;
    cout<<"Masukan Nilai Y = "; cin>>y;
    a = x == y;
    b = x != y;
    c = x > y;
    d = x < y;
    e = x >= y;
    f = x <= y;

    cout<<endl;
    cout<<"Hasil dari "<<x<<" == "<<y<<" = "<<a<<endl;
    cout<<"Hasil dari "<<x<<" != "<<y<<" = "<<b<<endl;
    cout<<"Hasil dari "<<x<<" > "<<y<<" = "<<c<<endl;
    cout<<"Hasil dari "<<x<<" < "<<y<<" = "<<d<<endl;
    cout<<"Hasil dari "<<x<<" >= "<<y<<" = "<<e<<endl;
    cout<<"Hasil dari "<<x<<" <= "<<y<<" = "<<f<<endl;
    return 0;
}
