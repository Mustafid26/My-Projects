#include <iostream>
/*
PROGRAM MAWAR IPK
{UNTUK MENENTUKAN KELULUSAN BEASISWA IPK}
BY : Evanza Kevin Abisha
TGL : 14 OKT 2022
*/

using namespace std;

int main()
{
    float ipk;
    cout << "Masukkan ipk anda : ";
    cin >> ipk;
    if ((ipk >= 3.49 && ipk <=4)){
        cout << "Lulus";
    }
    else if ((ipk < 0 && ipk >=2.5)){
        cout << "Rendah (Tidak Lulus)";
    }
    else if ((ipk >= 2.49) && (ipk <3.49)){
        cout << "Sedang (Dipertimbangkan)";
    }
    else {
        cout << "Inputan Salah";
    }
    return 0;
}
