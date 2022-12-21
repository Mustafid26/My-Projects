#include <iostream>

using namespace std;

int main()
{
    string bulan;
    int tahun;
    cout << "Masukkan Bulan (KAPITAL) : ";
    cin >> bulan;
    if (bulan == "FEBRUARI"){
        cout << "Masukkan Tahun : ";
        cin >> tahun;
        if (tahun % 400 != 0 && tahun % 100 == 0){
            cout << "Jumlah hari : 28 hari";
        }else if (tahun % 4 == 0){
            cout << "Jumlah hari : 29 hari";
        }else {
            cout << "Jumlah hari : 28 hari";
        }
    }else if (bulan == "APRIL" || bulan == "JUNI" || bulan == "SEPTEMBER" || bulan == "NOVEMBER"){
        cout << "Jumlah hari : 30 hari";
    }else if (bulan == "JANUARI" || bulan == "MARET" || bulan == "MEI" || bulan == "JULI" || bulan == "AGUSTUS" || bulan == "OKTOBER" || bulan == "DESEMBER"){
        cout << "Jumlah hari : 31 hari";
    }
}
