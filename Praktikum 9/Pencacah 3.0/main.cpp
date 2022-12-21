#include <iostream>
/*
PROGRAM PERULANGAN BILANGAN GENAP POSITIF DENGAN RANGE
NOTASI 5 => BERDASAR PENCACAH/I TRANSVERSAL
*/
using namespace std;

int main()
{
    //KAMUS
    int i,n;
    //ALGORTIMA
    cout << "Masukkan range batas bilangan genap : ";
    cin >> n;
    for (i=0;i<=n;i+=2){
        if (i==0){
            continue;
        }
        cout << i << endl;
    }
    cout << "SELESAI" << endl;
    return 0;
}
