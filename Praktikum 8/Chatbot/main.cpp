#include <iostream>
/*
PROGRAM CHATBOT SEDERHANA
BY : MUSTAFID KAISALANA
TGL : 9 NOVEMBER 2022
*/
using namespace std;

int main()
{
    //KAMUS
    char belokkiri;

    //ALGORITMA
    do {
        cout << "Kamu mau jadi pacarku gak ? [y/t] : ";
        cin >> belokkiri;
    }while (belokkiri != 'y');
    cout << "Yee kamu jadi pacarku";
    return 0;
}
