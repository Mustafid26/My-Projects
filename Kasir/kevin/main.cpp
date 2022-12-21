#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    int randomx,randomy ;
    char exit;
    srand (time(0));
    for(int a=0; a<10; a++){
        randomx = rand () ;
        randomy = rand () ;
        cout << "Bilangan X : " <<randomx << endl;
        cout << "Bilangan Y : " <<randomy << endl;
        if (randomx>randomy) {
        cout << "Bilangan X Lebih Besar Dari Bilangan Y" << endl;
        }
        else {
        cout << "Bilangan Y Lebih Besar Dari Bilangan X" << endl;
        }
        cout << "===================================" << endl;
    }
        cout << "ketik Exit Untuk Keluar Dari Progam =" << endl;
        cin >> exit;

}
