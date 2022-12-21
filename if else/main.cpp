#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Y, T;
    int umur;
    char kartu, kartubaru;
    cout << "Apakah anda memiliki kartu member? (Y/T) : ";
    cin >> kartu;
    if (kartu == 'Y') {
        cout << "Selamat anda mendapat diskon 10%";
        return 0;
    }
    if (kartu == 'T') {
        cout << "Maaf anda tidak dapat mendapat diskon" << endl;
    }
    cout << "Apakah anda ingin membuat kartu ? (Y/T) : ";
    cin >> kartubaru;
    if (kartubaru == 'Y'){
        cout << "Silahkan masukkan umur anda : ";
        cin >> umur;
        if (umur >= 18){
            cout << "Silahkan menghubungi nomor untuk tahap lanjut";
        }
        else if (umur < 18){
            cout << "Maaf anda tidak memenuhi kriteria umur";
        }
    }
    if (kartubaru == 'T'){
        cout << "Terimakasih";
    }

}
