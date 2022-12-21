#include <iostream>
/*
Program bintang dengan menggunakan do while
by: Mustafid Kaisalana
Tgl: 07 Desember 2022
*/
using namespace std;

int main ()
{
    //Kamus
    int n,j,k,i=1;

    //Algoritma
    cout << "Program membuat segitiga bintang menggunakan Do While" << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan Tinggi Bintang : ";
    cin >> n;

    do {
        j=n;
        do{
            j++;
        }
        while (j <= i );
        k=1;
        do{
            cout << "*";
            k++;
        }
        while (k <= (2*i-1));
        cout << endl;
        i++;
    }
    while (i <= n);
}
