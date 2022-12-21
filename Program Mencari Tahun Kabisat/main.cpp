#include <iostream>
/*
PROGRAM VALIDASI TAHUN KABISAT
{UNTUK MENCARI APAKAH TAHUN TERSEBUT TERMASUK KABISAT ATAU BUKAN}
BY : MUSTAFID KAISALANA
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    int tahun;
    cout << "Masukkan Tahun Masehi : ";
    cin >> tahun;

    if (tahun % 400 != 0 && tahun % 100 == 0){
        cout << "Bukan Tahun Kabisat";
    }else if (tahun % 4 == 0){
        cout << "Tahun Kabisat";
    }
    else {
        cout << "Bukan Tahun Kabisat";
    }
}
