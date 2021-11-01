/*
Program Mawar5
{Program untuk penyelesaian kasus kelipatan 5 si Mawar}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a;
    //ALGORITMA
    cin>>a;
    if(a < 0){
        a = a*-1;
    }
    if(a%5 == 0){
        cout<<"hore ketemu bilangan kelipatan 5"<<endl;
    }else{
        cout<<"yah.. bukan bilangan kelipatan 5"<<endl;
    }
    return 0;
}
