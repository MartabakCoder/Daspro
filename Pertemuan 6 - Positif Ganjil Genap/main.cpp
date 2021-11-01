/*
JUDUL: Program PositifGanjilGenap
{Program untuk  mengecek suatu bilangan positif atau bukan, cek pula bilangan positif tersebut ganjil atau genap?}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x;
    //ALGORITMA
    cin>>x;
    if(x>0){
        if(x%2 == 0){
            cout<<"Bilangan positif Genap"<<endl;
        }else{
            cout<<"Bilangan positif Ganjil"<<endl;
        }
    }else{
        cout<<"Bukan bilangan negatif"<<endl;
    }
    cout<<"Finish"<<endl;
    return 0;
}
