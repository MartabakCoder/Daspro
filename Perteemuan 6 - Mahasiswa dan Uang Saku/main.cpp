/*
JUDUL: Program Uangsaku
{karakter ‘y’ atau ‘t’ untuk verifikasi mahasiswa atau tidak dan uang saku dalam tipe integer, digunakan untuk mengecek mahasiswa mampu atau kurang mampu}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char c;
    int u;
    //ALGORITMA
    cout<<"Apakah anda mahasiswa? (y/t) ";
    cin>>c;
    if(c == 'y'){
        cout<<"Masukkan uang saku per-bulan? ";
        cin>>u;
        if(u>1000000){
            cout<<"Mahasiswa mampu"<<endl;
        }else{
            cout<<"Mahasiswa kurang mampu"<<endl;
        }
    }else if( c == 't'){
        cout<<"Bukan Mahasiswa"<<endl;
    }else{
        cout<<"Inputan Salah!"<<endl;
    }
    return 0;
}
