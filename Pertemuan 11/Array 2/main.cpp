#include <iostream>
#include <cstring>
/*
PROGRAM ARRAY 2
*/
using namespace std;

int main()
{
    //Kamus
    int nilai[5] = {1,2,3,4,5};
    //int nilai[] = {1,2,3,4,5};
    //int nilai []; //error
    //nilai [0] = 1; //error
    //int nilai [5];
    //memset (nilai, 0, 5*sizeof(int));
    //Algoritma
    /*cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;
    */

    //3. Output dengan looping
    for(int i = 0; i<5 ; i++){
        cout << &nilai[i] << endl;
    }
    return 0;
}
