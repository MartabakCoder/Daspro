#include <iostream>

using namespace std;
/* Program PersegiPanjag
{program untuk menghitung keliling dan luas persegi panjang}
*/
int main()
{
    //KAMUS
    float p,l,hasilKeliling,hasilLuas;
    //ALGORITMA
    cout<<"Masukan panjang = ";
    cin>>p;
    cout<<"Masukan lebar = ";
    cin>>l;
    hasilKeliling = 2*(p+l);
    hasilLuas = p*l;
    cout<<"Hasil Keliling = "<<hasilKeliling<<endl;
    cout<<"Hasil Luas = "<<hasilLuas;
    return 0;
}
