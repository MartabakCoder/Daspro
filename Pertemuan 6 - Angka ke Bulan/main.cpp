/*
Judul : Program Angka ke Bulan
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bulan;
    //ALGORITMA
    cin>>bulan;

    //Program Menggunakan Switch Case
    switch(bulan){
    case 1:
        cout<<"Januari"<<endl;
        break;
    case 2:
        cout<<"Februari"<<endl;
        break;
    case 3:
        cout<<"Maret"<<endl;
        break;
    default:
        cout<<"Pilihan Bulan Salah!"<<endl;
    }
    /* Program Menggunakan IF ELSE IF
    if(bulan == 1){
        cout<<"Januari"<<endl;
    }else if(bulan == 2){
        cout<<"Februari"<<endl;
    }else if(bulan == 3){
        cout<<"Maret"<<endl;
    }else{
        cout<<"Pilihan Bulan Salah!"<<endl;
    }
    */
    return 0;
}
