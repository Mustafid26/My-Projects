/*
    PROGRAM GANJIL
    Ket : Program untuk cek bilangan ganjil antara 75-90
    By : Evanza Kevin Abisha
    Tgl : 5 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan;

    //ALGORITMA
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;

    if ((bilangan % 2 !=0) && (bilangan>75) && (bilangan<90) )
    {
        cout << bilangan << " adalah bilangan ganjil antara 75-90";
        cout << endl;
    }
    cout << "Cek Selesai";


    return 0;
}
