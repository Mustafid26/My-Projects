#include <iostream>
/*
PROGRAM NESTED IF
{UNTUK MENENTUKAN MAHASISWA DAN UANG SAKU}
BY : MUSTAFID KAISALANA
TGL : 14 OKT 2022
*/


using namespace std;

int main()
{
    //KAMUS
    char mahasiswa;
    int uang;
    //ALGORITMA
    cout << "Apakah anda mahasiswa udinus ? (y/t): ";
    cin >> mahasiswa;
    if (mahasiswa == 'y'){
        cout << "Anda mahasiswa udinus"<< endl;
        cout << "Berapa uang saku anda ? : ";
        cin >> uang;
        if (uang > 1000000){
            cout << "Anda mahasiswa sultan";
        }
        else {
            cout << "Anda bukan mahasiswa sultan";
        }
    }else if (mahasiswa == 't'){
        cout << "Anda bukan mahasiswa udinus";
    }
    else {
        cout << "Inputan Salah";
    }
}
