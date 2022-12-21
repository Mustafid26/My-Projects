#include <iostream>
/*
    PROGRAM GENAP GANJIL 2 (operator ternary (?))
    {Program Untuk Mengecek Apakah Bilangan Termasuk Ganjil/Genap}
    By : Evanza Kevin Abisha
    Tgl : 12 Oktober 2022
*/

using namespace std;

int main()
{
    //Kamus
    int bilangan;
    string hasil;
    //Algoritma
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    hasil = (bilangan % 2 == 0)?/*operator ternary*/ "Bilangan Genap":"Bilangan Ganjil";
    cout << bilangan << " adalah " << hasil;
    return 0;
}
