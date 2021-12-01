/*
JUDUL: Program Beasiswa
{Program untuk mengecek kelulusan beasiswa berdasarkan IPK}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float  ipk;
    //ALGORITMA
    cin>>ipk;
    if(ipk>=3.5){
        cout<<"lulus"<<endl;
    }else if((ipk>=2.5) && (ipk<3.5)){
        cout<<"dipertimbangkan"<<endl;
    }else if(ipk<2.5){
        cout<<"tidak lulus"<<endl;
    }
    return 0;
}
