#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int randomx,randomy;
    char exit;
    srand (time(0));
    randomx = rand ();
    randomy = rand ();
    cout << "Bilangan X = " << randomx << endl;
    cout << "Bilangan Y = " << randomy << endl;
    if (randomx>randomy){
        cout << "Bilangan X Yang Lebih Besar" << endl;
    }
    else {
        cout << "Bilangan Y Yang Lebih Besar" << endl;
    }
    cout << "Ketik Exit Untuk Keluar Dari Program = " << endl;
    cin >> exit;
}
