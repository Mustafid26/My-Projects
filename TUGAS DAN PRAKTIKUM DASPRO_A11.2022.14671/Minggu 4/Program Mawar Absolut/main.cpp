/*
    Program Mawar Absolut
    Ket : Program cek bil bulat negatif atau positif menjadi bil bulat
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

    if (bilangan<0)
    {
        bilangan *=-1; //bilangan = bilangan*-1;

    }
    cout << bilangan << " adalah bilangan bulat positif";
    cout << endl << "Cek Selesai";
    return 0;
}
