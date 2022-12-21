#include <iostream>
/*
PROGRAM PERULANGAN PENCACAH
NOTASI 5 => BERDASAR PENCACAH/I TRANSVERSAL
*/
using namespace std;

int main()
{
    //KAMUS
    int n;
    //ALGORITMA
    cout << "Berapa kali mau diulang? : ";
    cin >> n;
    for (; n>0 ; n--){
        cout << "Mahasiswa Keren" << endl;
    }
    cout << "Selesai" << endl;
    return 0;
}
