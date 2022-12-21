#include <iostream>
/*
PROGRAM NESTED LOOP DINAMIS WHILE FOR
{PROGRAM MATRIKS INPUTAN}
BY : MUSTAFID KAISALANA
TGL : 30 NOV 2022
*/

using namespace std;

int main()
{
    //KAMUS
    int b, k, baris, kolom , nilai=1;
    //ALGORITMA
    cout << "Masukkan Baris dan Kolom : ";
    cin >> b >> k;
    baris = 1;
    while (baris<=b){
            baris ++;
        for(kolom=1; kolom<=k; kolom++){
            cout << nilai << "\t";
            nilai ++;
        }
        cout << endl;
    }
    return 0;
}
