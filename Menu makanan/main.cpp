#include <iostream>
/*
PROGRAM SWITCH CASE MENU
{UNTUK MENENTUKAN MENU DENGAN SWITCH CASE}
BY : MUSTAFID KAISALANA
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    int kode;
    cout << "List Menu Makanan dan Minuman"<< endl;
    cout << "1. Nasi Goreng"<< endl;
    cout << "2. Nasi ayam bakar"<< endl;
    cout << "3. Es teh"<< endl;
    cout << "4. Es jeruk"<< endl;
    cout << "Masukkan kode untuk memesan : ";
    cin >> kode;
    switch (kode){
    case 1 :
        cout << "Anda memesan nasi goreng dengan harga Rp. 10.000";
        break;
    case 2 :
        cout << "Anda memesan nasi ayam bakar dengan harga Rp. 15.000";
        break;
    case 3 :
        cout << "Anda memesan es teh dengan harga Rp. 5.000";
        break;
    case 4 :
        cout << "Anda memesan es jeruk dengan harga Rp. 5.500";
        break;
    default :
        cout << "Inputan anda salah";
    }
}
