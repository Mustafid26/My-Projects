#include <iostream>
using namespace std;

/*
PROGRAM MENAMBAH WAKTU 1 DETIK
{UNTUK MENGETAHUI WAKTU JIKA DITAMBAH 1 DETIK}
BY : MUSTAFID KAISALANA
*/
int main (){
    int jam,menit,detik;
    cout << "Masukkan jam, menit, dan detik: ";
    cin >> jam >> menit >> detik;
    detik = detik + 1;
    if (detik == 60){
        detik = 0;
        menit = menit + 1;
        if (menit == 60){
            menit = 0;
            jam = jam + 1;
            if (jam == 24){
            jam = 0;
            }
        }
    }
    cout << jam << ":" << menit << ":" << detik;
    return 0;
}
