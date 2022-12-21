#include <iostream>
/*
PROGRAM PERULANGAN CETAK DENGAN RANGE
NOTASI 5 => BERDASAR PENCACAH/I TRANSVERSAL
*/
using namespace std;

int main()
{
    //KAMUS
    int x,y,i;
    //ALGORITMA
    cout << "Input awalan dan akhiran : ";
    cin >> x >> y;
    for (i=x;i<=y;i++){
        cout << "Mahasiswa Kece" << endl;
    }
    cout << "Selesai" << endl;
    return 0;
}
