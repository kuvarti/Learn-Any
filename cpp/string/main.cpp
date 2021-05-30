#include <iostream>
using namespace std;

int main()
{
    char a[6]="Ahmet";      //Sonradan düzenleme yapılablir
    char *b="ERYILMAZ";     //Sonradan Düzenleme YAPILAMAZ
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<endl;
    cout<<"a[3] :"<<a[3]<<endl;
    cout<<"b[6] :"<<b[6]<<endl;
}