/*
    Kasus 2- Selisih luas 2 lingkaran (MEDIUM)
    Author: Rajendra Nohan(A11.2021.13301)
*/
#include <iostream>

using namespace std;

int main()
{
    //Kamus
    float LTotal , L1, L2, phi, r1, r2;
    phi = 3.14;
    //Algoritma
    cout << "Masukkan jari-jari (meter) Lingkaran 1 = ";
    cin >> r1;
    cout << "Masukkan jari-jari (meter) Lingkaran 2 = ";
    cin >> r2;
    L1 = phi*r1 *r1;
    L2 =  phi*r2*r2;
    LTotal = L1-L2;
    cout << "Luas Lingkaran Total adalah "<<LTotal<<" meter persegi \nDari Luas Lingkaran 1 yang bernilai "<< L1 <<" meter persegi \nDikurangi Luas Lingkaran 2 yang bernilai "<< L2 <<" meter persegi";
    return 0;
}
