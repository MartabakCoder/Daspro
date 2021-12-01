//JUDUL
/*
Program ChatbotSederhana
{program chatbot sederhana, tanya “apa mau belok kiri? (y/t)” dengan diberikan variabel belokkiri yang merupakan input user yang bertipe karakter}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char belokkiri;
    //ALGORITMA
    do{
        cout<<"apa mau belok kiri? (y/t)";
        cin>>belokkiri;
    }while(belokkiri != 'y');
    cout<<"Finish";
    return 0;
}
