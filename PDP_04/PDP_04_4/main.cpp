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
    //ALGORITMA
    cout<<"Kasus 4- Luas Persegi atau Persegi Panjang\n"<<endl;

    cout<<"Panjang : ";
    cin>>p;
    cout<<"Lebar : ";
    cin>>l;
    L = p*l;
    if(p == l){
        cout<<"Luas dari (persegi) dengan sisi : "<<p<<" adalah "<<L<<endl;
    }else{
        cout<<"Luas dari (persegi panjang) dengan panjang : "<<p<<" dan lebar : "<<l<< " adalah "<<L<<endl;
    }
    return 0;
}
