/*
JUDUL Program Ribuan Ratusan Puluhan Satuan
{Input bilangan bulat positif ribuan}
{Mencari masing-masing 1 angka ribuan, ratusan, puluhan, satuan dan tuliskan hasilnya}
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n,rib, rat, pul, sat;
    //ALGORITMA
    cout<<"Masukkan angka ribuan antara 0 sampai 9999 = ";
    cin>>n;
    rib = n/1000;
    rat = (n % 1000) / 100;
    pul = (n % 100) / 10;
    sat = n % 10;
    cout<<rib << " ribuan, " << rat << " ratusan, "<< pul << " puluhan, dan "<< sat <<" satuan.";
    return 0;
}
