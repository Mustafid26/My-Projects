#include <iostream>
/*
PROGRAM SUHU AIR V2
{UNTUK MENENTUKAN KONDISI AIR DENGAN INPUTAN SUHU}
BY : MUSTAFID KAISALANA
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    ///KAMUS
    float s;
    //ALGORITMA
    cout << "Masukkan Suhu Air : ";
    cin >> s;
    if (s < 0){
        cout << "Air tersebut beku";
    }
    else if (s==0){
        cout << "Air tersebut beku-cair";
    }
    else if ((s>0) && (s<100)){
        cout << "Air tersebut cair";
    }
    else if ( s == 100){
        cout << "Air tersebut berupa cair-uap";
    }
    else if ( s > 100 ){
        cout << "Air tersebut berupa uap";
    }
    return 0;
}
