#include <iostream>
#include <fstream>
using namespace std;

string terscevir(string a);
int main()
{
    ifstream dosya2("dosya.txt");
    string satir;
    
    ofstream dosya;
    dosya.open("cikti.txt");
    if(dosya.is_open()){
        if(dosya2.is_open()){
            while( getline(dosya2,satir)){
                dosya<<terscevir(satir)<<endl;
            }
        }
    }
    dosya2.close();
    dosya.close();
}
string terscevir(string a){
    int uz=a.length(), say=uz;
    char tut;
    for(int i=0;i<(uz/2);i++){
        say--;
        tut=a[i];
        a[i]=a[say];
        a[say]=tut;
    }
    return a;
}