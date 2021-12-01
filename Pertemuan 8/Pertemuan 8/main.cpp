#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int b = 57;
    int c = 32;
    //ALGORITMA
    do{
        cout<<"loop do while - variable c : "<<c<<endl;
        c++;
    }while(c<=33);

    while(b<59){
        cout<<"loop while - variable b : "<<b<<endl;
        b++;
    }

    for(int a=10; a<15; a=a+1){
        cout<<"loop for - variable a : "<<a<<endl;
    }
    return 0;
}
