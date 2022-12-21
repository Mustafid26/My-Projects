#include <iostream>
/*
PROGRAM VALIDASI TAHUN KABISAT
{UNTUK MENGETAHUI APAKAH TAHUN TERSEBUT KABISAT ATAU BUKAN}
BY : KAISALANA
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    int tahun;
    cout<<"Masukkan Tahun : ";
    cin>> tahun;
    if (tahun%400!=0 && tahun % 100==0){
        cout << "Bukan Tahun Kabisat";
    }else if (tahun%4==0){
        cout<< "Tahun Kabisat";
    }
    else {
        cout << "Bukan Tahun Kabisat";
    }
}
