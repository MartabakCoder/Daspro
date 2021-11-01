#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char c = 'A';
    string nama="Rajendra Nohan";
    string nim;
    nim = "A11.2021.13301";
    int umur;
    umur = 19;
    float tinggi =  170.2;

    //ALGORITMA
    cout<<"Nama \t:"<<nama<<endl;
    cout<<"NIM \t:"<<nim<<endl;
    cout<<"Umur \t:"<<umur<<endl;
    cout<<"Tinggi \t:"<<tinggi<<endl;

    //JUDUL: Pertemuan 3 - I/O, Operasi, dll
    //KAMUS
    float p,l,luasPP;
    //ALGORITMA
    cout<<"==========Program Hitung Luas Persegi Panjang=========="<<endl;
    cout<<"Masukan panjang = ";
    cin>>p;
    cout<<"Masukan lebar = ";
    cin>>l;
    luasPP = p*l;
    //cout<<luasPP<<endl;
    cout<<"Luas persegi panjang  = p x l = "<<p<<" x "<<l<<" =  "<<luasPP<<endl;

    int operand_1 = 30;
    int operand_2 = 50;
    int hasil;
    hasil = operand_1 - operand_2 + 100;
    cout<<"Hasil operand = "<<hasil<<endl;

    int angka_1 = 20;
    int angka_2 = 5;
    bool hasil_relasi;

    hasil_relasi  = (angka_1 == angka_2);
    cout<<"Hasil relasi = "<<hasil_relasi<<endl;

    bool operand_3 = true;
    bool operand_4 = true;
    bool hasil_logika;

    hasil_logika = (operand_3 &&& operand_4);
    cout<<"Hasil logika = "<<hasil_logika<<endl;

    int i = 10;
    cout<<"i  before = "<<i<<endl;

    i = i*2;
    cout<<"i  after = "<<i<<endl;
    return 0;
}
