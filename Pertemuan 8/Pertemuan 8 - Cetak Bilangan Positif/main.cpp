//JUDUL
/*
Program CetakBilanganPositif
{Tulis semua bilangan positif lebih dari 0 dari 1, 2, 3, ..., sampai N. Perhatikan bahwa N merupakan bilangan bulat positif yang di inputkan oleh user.}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int y;
    //ALGORITMA
    cout<<"Masukan y untuk loop angka = ";
    cin>>y;
    for(int x=0;x<=y;x++){
        cout<<x<<", ";
    }
    return 0;
}
