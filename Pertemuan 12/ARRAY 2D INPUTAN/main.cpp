#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int X[3][4];
    //ALGORITMA

    for (int baris = 0; baris < 3; baris ++){
        for(int kolom = 0; kolom < 4; kolom ++){
            cout << "Input Nilai Baris- ";
            cout << baris << " Kolom ke- ";
            cout << kolom << " = ";
            cin >> X[baris][kolom];
        }
        cout << endl;
    }
    for (int baris = 0; baris < 3; baris ++){
        for(int kolom = 0; kolom < 4; kolom ++){
            cout << X[baris][kolom];
            cout << "\t";
        }
        cout << endl;
    }
}
