#include <iostream>
#include <string.h>
/*
PROGRAM ARRAY 3
Nama : Mustafid Kaisalana
NIM : A11.2022.14703
*/

using namespace std;

int main()
{
    //KAMUS
    string hari [7];
    for(int i = 0; i < 7; i++){
        cout << "Input Hari ke- " << i+1 << " : ";
        cin >> hari[i];
    }
    //Algoritma
    for (int i = 0; i < 7; i ++){
        cout << "Hari ke - " << i+1 << " : ";
        cout << hari [i] << endl;
    }
    return 0;
}
