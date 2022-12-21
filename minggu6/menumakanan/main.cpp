#include <iostream>

using namespace std;

int main()
{
    //kamus
    int kode;
    //algoritma
    cout << "Masukan kode makanan : " << endl;
    cin >> kode;
    switch (kode){
case 1 :
    cout << "Anda memesan Nasi Goreng";
    break;
case 2 :
    cout << "Anda memesan Mie goreng";
    break;
case 3 :
    cout << "Anda memesan krikil goreng";
    break;
case 4 :
    cout << "Anda memesan keripik goreng";
    break;
default :
    cout << "Kode anda salah";
    break;
    }

    return 0;
}
