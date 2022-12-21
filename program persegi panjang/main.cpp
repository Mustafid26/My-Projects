#include <iostream>

using namespace std;
//PROGRRAM
int main()
{
    //KAMUS
    float p, l, hasilKeliling, hasilLuas;
    //ALGORITMA
    cout << "PROGRAM PERSEGI PANJANG" << endl;
    cout << "=======================" << endl;
    cout << "Masukkan Panjang = " << endl;
    cin >> p ;
    cout << "Masukkan Lebar = " << endl;
    cin >> l;
    hasilKeliling = 2 * (p+l);
    hasilLuas = p*l;
    cout << "Hasil Keliling = " << hasilKeliling << endl;
    cout << "Hasil Luas = " << hasilLuas << endl;
}
