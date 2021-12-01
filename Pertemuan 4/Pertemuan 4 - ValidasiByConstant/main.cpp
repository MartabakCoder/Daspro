/*
Program ValidasiByConstant
{Program untuk mengecek suatu bilangan bulat apakah lebih dari suatu nilai variabel konstanta}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a;
    const int x = 10;
    //ALGORITMA
    cin >>a;
    if (a>x){
        cout<<"Valid"<<endl;
    }
    cout<<"Selesai cek";
    return 0;
}
