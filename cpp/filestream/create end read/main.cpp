#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream dosya;        //Dosya yazmak için. of=outputfile
    dosya.open("dosya.txt");
    if(dosya.is_open()){
        dosya<<"deneme yazısı";
        dosya.close();
    }
    
    ifstream dosya2("dosya.txt");         //dosya okumak için. if=inputfile
    string satir;
    if(dosya2.is_open()){
        while( getline(dosya2,satir)){
            cout<<satir<<endl;
        }
        dosya2.close();
    }
}