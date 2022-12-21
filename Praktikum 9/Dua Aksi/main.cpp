#include <iostream>
/*
PROGRAM CETAK MAHASISWA
NOTASI 4 => BERDASAR DUA AKSI
TGL : 23 NOV 2022
*/
using namespace std;

int main()
{
    //KAMUS
    int i=0, n;
    //ALGORITMA
    cout << "Masukkan jumlah yang ingin diulang : ";
    cin >> n;
    while(true){
        i++;
        cout << "Mahasiswa Keren " << i << endl;
        if(i>=n){
            cout << "Stop" << endl;
            break;
        }
    }

    return 0;
}
