#include <iostream>
//PROGRAM CHATBOT BUCIN
//(NOTASI => BERDASAR PERULANGAN)
// TGL : 23 NOV 2022
using namespace std;

int main()
{
    //KAMUS
    char pilih;

    //ALGORITMA
    cout << "Kamu mau gak jadi pacar aku? (y/t): ";
    cin >> pilih;
    //WHILE
    //while (pilih!='y'){
        //cout << "Kamu mau gak jadi pacar aku? (y/t): ";
        //cin >> pilih;
    //}
    //cout << "Selesai";
    //DO WHILE
    //do {
        //cout << "Kamu mau gak jadi pacar aku? (y/t): ";
        //cin >> pilih;
    //}while (pilih !='y');
    //cout << "Selesai";
    //FOR
    for (;pilih !='y';pilih++){
        cout << "Kamu mau gak jadi pacar aku? (y/t): ";
        cin >> pilih;
    }
    cout << "Selesai";
    return 0;
}
