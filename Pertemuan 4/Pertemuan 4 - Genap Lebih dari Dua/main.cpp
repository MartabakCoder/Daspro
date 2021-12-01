/*
Program GenapLebihdariDua
{Program untuk mengecek apakah a bilangan genap yang lebih dari 2}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a;
    //ALGORITMA
    cin >>a;
    if ((a%2 == 0)&&(a>2) ){
        cout<<a<<" adalah bilangan genap lebih dari 2"<<endl;
        string coba = "stringnya aksi";
        cout<<coba<<endl;
    }
    cout<<"Selesai cek";
    return 0;
}
