#include <iostream>
/*
    PROGRAM GENAP GANJIL
    {Program Untuk Mengecek Apakah Bilangan Termasuk Ganjil/Genap}
    By : Evanza Kevin Abisha
    Tgl : 12 Oktober 2022
*/

using namespace std;

int main()
{
    //Kamus
    int bilangan;
    //Algoritma
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    if (bilangan % 2 == 0) {
        cout << bilangan << " Bilangan Tersebut Adalah Bilangan Genap";
    }
    else {
        cout << bilangan << " Bilangan Tersebut Adalah Bilangan Ganjil";
    }
    return 0;
}
