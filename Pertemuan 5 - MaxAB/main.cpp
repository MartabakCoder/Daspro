/*
Program MaxAB
{Program untuk mencetak bilangan dengan nilai maksimal dua bilangan bulat a dan b}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a,b;
    //ALGORITMA
    cin>>a;
    cin>>b;
    if(a >= b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
    return 0;
}
