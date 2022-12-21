#include <iostream>
using namespace std;

int main () {
    //Kamus
    float C;
    float R;
    float F;
    float K;
    char exit;
    //Algoritma
    cout << "Masukkan Suhu Dalam Celcius = " << endl;
    cin >> C;
    R =  4.0/5.0 * C;
    F = (9.0/5.0) * C + 32;
    K = C + 273;
    cout << "Konversi Celcius Ke Reamur Adalah = " << R << endl;
    cout << "Konversi Celcius Ke Fahrenheit Adalah = " << F << endl;
    cout << "Konversi Celcius Ke Kelvin Adalah = " << K << endl;
    cout << "Ketik Exit Untuk Keluar Dari Program = " << endl;
    cin >> exit;
    return 0;
}
