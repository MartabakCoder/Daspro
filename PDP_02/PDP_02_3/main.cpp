/*
Kasus 3- Aritmatika #2 (MEDIUM)
Author: Rajendra Nohan
*/
#include <iostream>

using namespace std;

void aritmatikaDuaProses(float a,float t){
    //Prepare
    float aritmatika;
    //Process
    aritmatika = 0.5 * a * t;
    //Print output process
    cout << aritmatika <<endl;
}

int main()
{
    aritmatikaDuaProses(3,1);
    aritmatikaDuaProses(2,2);

    return 0;
}
