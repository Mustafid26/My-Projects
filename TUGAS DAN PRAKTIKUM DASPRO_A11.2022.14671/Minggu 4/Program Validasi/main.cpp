#include <iostream>

using namespace std;

/*
        PROGRAM VALIDASI
        Ket : Program untuk cek bilangan > konstanta x
        By : Evanza Kevin Abisha
        Tgl : 5 Oktober 2022
*/
int main(){
    //KAMUS
    int bilangan;

    //ALGORITMA
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    if (bilangan > 0)
    {
        cout << bilangan << " Bilangan Tersebut Lebih Besar Dari 0";
        cout << endl;
    }
    cout << "Cek Selesai" << endl;
    return 0;
}
