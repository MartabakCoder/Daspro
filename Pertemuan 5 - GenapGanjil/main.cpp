/*
Program GenapGanjil
{Program untuk mengecek apakah a bilangan genap atau ganjil}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x;
    //ALGORITMA
    cin>>x;
    if(x%2 == 0){
        cout<<"Genap"<<endl;
    }else{
        cout<<"Ganjil"<<endl;
    }
    cout<<"Finish";
    return 0;
}
