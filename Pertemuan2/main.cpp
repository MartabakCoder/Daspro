//Judul : Pertemuan 2 - Variable
/*
    Nama    : Rajendra Nohan
    NIM     : A11.2021.13301
    Tempat  : Kasur
    Tinggal  : 11 Oktober 2021
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS

    //Int atau Integer merupakan tipe data untuk mengeklarasikan suatu angka yang tidak memiliki anhka di belakang koma
    int example1;       //Menginisialisasikan tipe data integer dengan variable (Example1)
    example1 = 100;     //Mendeklarasikan tipe data integer dengan variable (Example1) ke sebuah value/nilai

    //Float sendiri merupakan tipe data untuk mengeklarasikan suatu angka desimal atau koma akan tetapi memiliki batas tertentu dan lebih sedikit di bandingkan tipe data double
    float example2;     //Menginisialisasikan tipe data float dengan variable (Example2)
    example2 = 75.22;   //Mendeklarasikan tipe data float dengan variable (Example2) ke sebuah value/nilai

    //Tipe Data Char adalah tipe data yang hanya bisa diisi dengan 1 karakter saja. Karakter ini (alpanumerik) harus ditulis diantara tanda kutip
    char example3;      //Menginisialisasikan tipe data char dengan variable (Example3)
    example3 = 'S';   //Mendeklarasikan tipe data char dengan variable (Example3) ke sebuah value/nilai

    //Inisialisasi Untuk Example Case
    string nama,nim;
    int usia, tinggiInt;
    float beratBadan, tinggiFloat;

    //Deklarasi Untuk Example Case
    nama = "Rajendra Nohan";
    nim = "A11.2021.13301";
    usia = 19;
    tinggiInt = 170;
    tinggiFloat = 172.62;

    //Algoritma
    cout<<"Pertemuan 2 - Variable"<<endl;
    cout<<"Hallo saya programmer"<<endl;
    cout<<"Namaku \""<<nama<<"\""<<endl;
    cout<<"Dan NIM saya adalah "<<nim<<endl;
    cout<<"Usia saya sekarang sudah menginjak angka "<<usia<<" tahun"<<endl;
    cout<<"Dengan tinggi badan saya berkisar dari "<<tinggiInt<<"cm - "<<tinggiFloat<<"cm"<<endl;
    cout<<"Tak lupa nih huruf yang saya gemari ialah huruh \""<<example3<<"\""<<endl;

    return 0;
}
