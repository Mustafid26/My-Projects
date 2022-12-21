#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int X[2][3][2] = {
        1,2,3,4,5,6,7,8,9,10,11,12
    };
    //ALGORITMA
    //CETAK ARRAY 3D
    for (int baris = 0; baris < 2; baris ++){
        for (int kolom = 0; kolom < 3; kolom++){
            for (int dalam = 0; dalam < 2; dalam ++){
                cout << X[baris][kolom][dalam];
                cout << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
}
