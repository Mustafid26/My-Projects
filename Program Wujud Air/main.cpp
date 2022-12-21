#include <iostream>
/*
PROGRAM SUHU AIR
{UNTUK MENENTUKAN TIPE AIR DENGAN INPUTAN SUHU}
BY : MUSTAFID KAISALANA
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    int s;
    cout << "Masukkan Suhu Air : ";
    cin >> s;
    if (s <= 0){
        cout << "Air tersebut beku";
    }
    else if ((s>0) && (s<=100){
        cout << "Air tersebut cair";
    }
    else if (s>100){
        cout << "Air tersebut berupa uap";
    }
    return 0;
}
