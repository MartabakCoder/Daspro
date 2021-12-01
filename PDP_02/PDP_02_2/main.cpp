/*
Kasus 2- Aritmatika #1 (MEDIUM)
Author: Rajendra Nohan
*/
#include <iostream>

using namespace std;

//Saya kasih tipe data float untuk jaga-jaga
void aritmatikaSatuProses(float x,float y){
    //Prepare
    float aritmatika;
    //Process
    aritmatika = 2*x + y*5;
    //Print output process
    cout << aritmatika <<endl;
}

int main()
{
    aritmatikaSatuProses(1,1);
    aritmatikaSatuProses(2,2);
    return 0;
}


