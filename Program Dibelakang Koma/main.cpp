#include <iostream>
using namespace std;

int main () {
    int hasil2,hasil4,hasil5, hasil6;
    float angka,hasil3, hasil1;
    cout << "Masukkan Angka : ";
    cin >> angka;
    hasil1 = angka/100;
    hasil2 = angka/100;
    hasil3 = hasil1 - hasil2;
    hasil4 = hasil1 - hasil3;
    hasil5 = hasil3*100;
    hasil6 = hasil5 + 1;
    if (angka > 99 && angka <= 9999) {
        cout << "Angka Awal : " << angka << endl;
        cout << "Angka Desimal : " << hasil1 << endl;
        cout << "Angka Awal Di depan Koma : " << hasil4 << endl;
        cout << "Angka Dibelakang Koma : " << hasil5 << endl;
    }else if (angka > 9999) {
        cout << "Angka Awal : " << angka << endl;
        cout << "Angka Desimal : " << hasil1 << endl;
        cout << "Angka Awal Di depan Koma : " << hasil4 << endl;
        cout << "Angka Dibelakang Koma : " << hasil6 << endl;
    }
    else {
        cout << "Inputan Salah";
    }
}