//Judul
/*
Persoalan Komputasional yang lain
{Tulis semua bilangan positif lebih dari 0 dari 1, 2, 3, ..., sampai N. Perhatikan bahwa N merupakan bilangan bulat positif yang di inputkan oleh user.}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n,i;
    //ALGORITMA
    cin>>n;
    i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=n);
    return 0;
}
