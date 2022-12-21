#include <iostream>

using namespace std;

int main()
{
    int n,a;
    string bintang = "*";
    cout << "Masukkan Jumlah Array : ";
    cin >> n;
    int nilai[n];
    for (int i = 0; i<n;i++){
        cout << "Inputkan Angka ke - "<< i+1 << " : ";
        cin >> nilai[i];
    }
    for (int i = 0; i<n;i++){
        cout << nilai[i] <<":"<< endl;
        for (int j=0;j<nilai[i];j++){
            cout << bintang;
        }
        cout << endl;
    }
}
