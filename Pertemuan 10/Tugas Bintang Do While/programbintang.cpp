#include <iostream>
#include <stdio.h>
/*
Program bintang dengan menggunakan do while
by: Mustafid Kaisalana
Tgl: 07 November 2022
*/
using namespace std;

int main ()
{
    //Kamus
    int n,j,k,i=1;

    //algoritma
    cout << "Program membuat segitiga bintang dengan Do While" << endl;
    cout << "Masukan kolom bintang : ";
    cin >> n;

    do {
        j=n;
        do{
            cout << " ";
            j--;
        }
        while (j <= i-n );
        k=1;
        do{
            cout << "* ";
            k++;
        }
        while (k <= i);
        cout << endl;
        i++;
    }
    while (i <= n);
}
