#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[6]="Ahmet";
    char *b="ERYILMAZ";
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<endl;
    cout<<"a[3] :"<<a[3]<<endl;
    cout<<"b[6] :"<<b[6]<<endl;
    
    char c[9]="ERYILMAZ";
    if(b==c)                //bu sadece adresleri karşılaştırır!!
        cout<<"Equal"<<endl;
    else 
        cout<<"Not Equal"<<endl;
        
    //b=c; Shallow Copy- Sığ Kopyalama     //b'ye c ile ayni adresi atar
    
    //strcmp->StringCompare=Sözlük karşılaştırması yapar
    if(strcmp(b,c)==0)       //0->ikiside eşitse, +1->1. değer büyükse, -1->2. değer büyükse
        cout<<"Equal"<<endl;
    else 
        cout<<"Not Equal"<<endl;
    
}