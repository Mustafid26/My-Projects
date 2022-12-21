#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
    int randomx,randomy;
    char exit;
    srand (time(0));
    for(int i = 0; i < 10; i++){
        randomx = rand ();
        randomy = rand ();
        cout << "Bilangan X = " << randomx << endl;
        cout << "Bilangan Y = " << randomy << endl;
        if (randomx>randomy){
        cout << "Bilangan X Lebih Besar Dari Bilangan Y" << endl;
        }
        else {
        cout << "Bilangan Y Lebih Besar Dari Bilangan X" << endl;
        }
        cout << "===========================" << endl;
    }
    cout << "Ketik Exit Untuk Keluar Dari Program = " << endl;
    cin >> exit;
    return 0;
}
