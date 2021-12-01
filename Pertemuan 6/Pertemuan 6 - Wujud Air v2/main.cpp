/*
JUDUL: Program WujudAir
{menuliskan wujud air sesuai dengan nilai s, s bisa diasumsikan sebagai suhu}
{s dalam hal ini representasikan dengan integer}
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int  s;
    //ALGORITMA
    cin>>s;
    if(s<0){
        cout<<"beku"<<endl;
    }else if(s==0){
        cout<<"beku-cair"<<endl;
    }else if((s>0) && (s<100)){
        cout<<"cair"<<endl;
    }else if(s==100){
        cout<<"cair-uap"<<endl;
    }else if(s>100){
        cout<<"uap"<<endl;
    }
    return 0;
}
