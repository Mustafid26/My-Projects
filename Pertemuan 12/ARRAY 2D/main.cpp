#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int X[3][4] = {
        {
            1,2,3,4

        },
        {
            5,6,7,8
        },
        {
            9,10,11,12
        }
    };
    //ALGORITMA
    for (int baris = 0; baris < 3; baris ++){
        for(int kolom = 0; kolom < 4; kolom ++){
            cout << X[baris][kolom];
            cout << "\t";
        }
        cout << endl;
    }
}
