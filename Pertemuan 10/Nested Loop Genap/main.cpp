#include <iostream>
/*
PROGRAM NESTED LOOP GENAP
{Program Cetak Matriks Baris Kolom = 3}
*/
using namespace std;

int main()
{
    //KAMUS
    int baris,kolom, nilai=2;
    //ALGORITMA
    for (baris=1;baris<=3;baris++){
        for(kolom=1;kolom<=3;kolom++){
            cout << nilai << "\t";
            nilai += 2;
        }
        cout << endl;
    }
    return 0;
}
