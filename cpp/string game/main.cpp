#include <iostream>
#include <string.h>
using namespace std;

//ardışığa çevrilicek
string mcikar(string a,int indis1, int indis2){
    string b="";
    for(int i=0;i<a.length();i++){
        if(i!=indis1 &&  i!=indis2){
            b+=a[i];
        }else b+=" ";
    }
    return b;
}
string cikar(string a){
    for(int i=0;i<a.length();i++){
        for(int j=0;j<a.length();j++){
            if(i!=j){
                if(a[i]==a[j]){
                    a=mcikar(a,i,j);
                }
            }
        }
    }
    string rt="";
    for(int i=0;i<a.length();i++){
        if(a[i]!=' ')
            rt+=a[i];
    }
    return rt;
}
int main()
{
    string deneme="xyxyaiaaa";
    deneme=cikar(deneme);
    cout<<deneme;
}