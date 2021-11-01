/*
Kasus 5- Kebut-kebutan! (HARD)
Author: Rajendra Nohan
*/
#include <iostream>

using namespace std;

int main()
{
    //Prepare
    float vt,v0,a,t;
    //Declare
    v0 = 0; //Kecepatan awal
    vt = 21.55; //Kecepatan Terkini
    t = 12.5; //Waktu
    //Process
    a = (vt-v0)/t; //Percepatan
    //Print output process
    cout << a;
    return 0;
}
