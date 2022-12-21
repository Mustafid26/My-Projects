#include <iostream>
using namespace std;

int main () {
    char jahitan, kain;
    int hargakatun,casualkatun,totalcasualkatun,totalcasualviscose, totalpiyamakatun, piyamakatun, casualviscose;
    float hargaviscose;
    cout << "TOKO GUE" << endl;
    cout << "============================"<< endl;
    cout << "Tipe Kain   : " << endl;
    cout << "Katun (K)   : 20.000/meter" << endl;
    cout << "Viscose (v) : 50.000/meter" << endl;
    cout << endl;
    cout << endl;
    cout << "Model Jahitan" << endl;
    cout << "Casual (C)  : 100.000"<< endl;
    cout << "Piyama (P)  : 75.000"<< endl;
    cout << endl;
    cout << endl;
    cout << "Masukkan Model Jahitan (C/P): ";
    cin >> jahitan;
    cout << "Masukkan Tipe Kain (K/V): ";
    cin >> kain;
    if (jahitan == 'C' && kain =='K'){
        hargakatun = 2*20000;
        casualkatun = 100000;
        totalcasualkatun = hargakatun + casualkatun; 
        cout << "Kebutuhan Kain : 2 meter" << endl;
        cout << "Total Harga : " << totalcasualkatun << endl;
    }else if (jahitan == 'C' && kain == 'V'){
        hargaviscose = 1.5*50000;
        casualviscose = 100000;
        totalcasualviscose = hargaviscose +  casualviscose;
        cout << "Kebutuhan Kain : 1.5 meter" << endl;
        cout << "Total Harga : " << totalcasualviscose << endl;
    }else if (jahitan == 'P' && jahitan == 'K'){
        hargaviscose = 1.5*50000;
        piyamakatun = 75000;
        totalpiyamakatun = hargaviscose + piyamakatun;
        cout << "Kebutuhan Kain : 1.5 meter" << endl;
        cout << "Total Harga : " << totalpiyamakatun << endl;
    }
    cout << "===================" << endl;
    cout << "Model Kain : " << jahitan << endl;
    cout << "Tipe Kain  : " << kain << endl;
    return 0;
}