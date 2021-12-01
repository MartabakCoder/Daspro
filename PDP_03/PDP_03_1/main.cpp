/*
    Kasus 1- Volume Tabung (EASY)
    Author: Rajendra Nohan(A11.2021.13301)
*/
#include <iostream>

using namespace std;

int main()
{
    //Kamus
    float v, phi,r,t;
    phi = 3.14;
    //Algoritma
    cout << "Masukkan jari-jari (meter) = ";
    cin >> r;
    cout << "Masukkan tinggi (meter) = ";
    cin >> t;
    v = phi*r *r*t;
    cout << "Volume tabung dengan jari-jari "<< r <<" meter dan tinggi "<< t <<" meter adalah "<< v <<"meter kubik";
    return 0;
}
