/*
Kasus 4- Cek Error (MEDIUM)
Author: Rajendra Nohan
*/
#include <iostream>

using namespace std;

int main()
{
    //Prepare
    int a,b;
    //Declare
    a = 1;
    b = 4;
    //Print #1
    cout << "Hasil a yang pertama: "<< a <<endl;
    cout << "Hasil b yang pertama: "<< b <<endl;
    //Redeclare
    b = a;
    a = -b;
    //Print #2
    cout << "Hasil a yang kedua: "<< a <<endl;
    cout << "Hasil b yang kedua: "<< b <<endl;
    //Redeclare
    a = b + 1;
    b = a / b;
    //Print #3
    cout << "Hasil a yang ketiga: "<< a <<endl;
    cout << "Hasil b yang ketiga: "<< b <<endl;
    return 0;
}
