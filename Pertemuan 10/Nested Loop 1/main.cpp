#include <iostream>
/*
PROGRAM NESTED LOOP
{Program Cetak Matriks Baris Kolom = 3}
*/
using namespace std;

int main()
{
    //KAMUS
    int baris,kolom, nilai=9;
    //ALGORITMA
    for(baris=1;baris<=3;baris++)/*OUTER LOOP*/{
        for(kolom=1;kolom<=3;kolom++)/*INLINE LOOP*/{
            cout << nilai << "\t";
            nilai--;
        }
        cout << endl;
    }
    return 0;
}
