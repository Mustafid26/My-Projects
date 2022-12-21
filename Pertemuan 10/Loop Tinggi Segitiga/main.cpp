#include <iostream>

using namespace std;

int main()
{
    int baris,kolom,tinggi;
    cout << "Masukkan Tinggi : ";
    cin >> tinggi;
    baris = 1;
    do {
        baris++;
        kolom = 1;
        do {
            kolom++;
            cout << "*";
        }while(kolom<baris);
        cout << endl;
    }while(kolom<=tinggi);
}
