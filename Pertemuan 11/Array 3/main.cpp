#include <iostream>
/*
PROGRAM ARRAY 3
Nama : Mustafid Kaisalana
NIM : A11.2022.14703
*/

using namespace std;

int main()
{
    //KAMUS
    int n;
    //2. Inisialisasi Nilai
    cout << "Inputkan Jumlah Elemen Nilai Array : ";
    cin >> n;
    int nilai [n];
    for(int i = 0; i < n; i++){
        cout << "Input Nilai ke- " << i+1 << " : ";
        cin >> nilai[i];
    }
    //Algoritma
    for (int i = 0; i < n; i ++){
        cout << "Nilai ke - " << i+1 << " : ";
        cout << nilai [i] << endl;
    }
    return 0;
}
