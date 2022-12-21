#include <iostream>
/*
PROGRAM NESTED LOOP GANJIL IF
{Program Cetak Matriks Baris Kolom = 3}
*/
using namespace std;

int main()
{
    //KAMUS
    int baris,kolom, nilai=1;
    //ALGORITMA
    for (baris=1;baris<=3;baris++){
        for(kolom=1;kolom<=6;kolom++){
            if(nilai%2!=0){
                cout << nilai << "\t";
            }
            nilai ++;
        }
        cout << endl;
    }
    return 0;
}
