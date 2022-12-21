#include <iostream>
using namespace std;

int main (){
    int jam,menit,detik;
    cout << "Masukkan jam, menit, dan detik: ";
    cin >> jam >> menit >> detik;
    if (detik + 1 < 60){
        detik = detik + 1;
    }else if (menit + 1 < 60){
        menit = menit + 1;
    }else if (jam + 1 < 24){
        jam = jam + 1;
    }
    else {
        jam = 0;
        menit = 0;
        detik = 0;
    }
    cout << jam << ":" << menit << ":" << detik;
    return 0;
}