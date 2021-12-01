/*
Kasus 4- Luas Persegi atau Persegi Panjang
Author: Rajendra Nohan
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float p,l,L;
    string keputusan;
    //ALGORITMA
    cout<<"Kasus 4- Luas Persegi atau Persegi Panjang\n"<<endl;

    cout<<"Panjang : ";
    cin>>p;
    cout<<"Lebar : ";
    cin>>l;
    cout<<"Keputusan (setuju / tidak setuju): ";
    getline(cin >> ws, keputusan);
    L = p*l;
    cout<<"Luas tanah : "<<L<<endl;
    if(keputusan == "setuju"){
        cout<<"Tanah sepakat untuk dijual dengan Luas masing-masing orang "<<L/2<<endl;
    }else if(keputusan == "tidak setuju"){
        cout<<"Tanah yang berluas "<<L<<"tidak sepakat untuk dijual"<<endl;
    }else{
        cout<<"Keputusan tidak terdeteksi"<<endl;
    }
    return 0;
}
