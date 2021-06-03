#include <iostream>
#include <string.h>
using namespace std;

int k1(string a);
int k2(string a);
int main()
{
    string deneme;
    cout<<"Please Enter A Text : ";
    cin>>deneme;
    k2(deneme);
}
int k1(string a){      //with create another string
    int kontrol=0,uzun=a.length();
    string b;
    for(int i=uzun;i>=0;i--){
        b+=a[i];
    }
    cout<<b<<endl;
    for(int i=0;i<uzun;i++){
        if(a[i]==b[i+1]){
            kontrol++;
        }
    }
    if(kontrol==(uzun))
         cout<<"Palindrom";
    else cout<<"Not Palindrom";
}

int k2(string a){
    int uz=a.length(), say=uz, kontrol=0;
    for(int i=0;i<uz;i++){
        say--;
        if(a[say]==a[i])
            kontrol++;
        cout<<a[say]<<" "<<a[i]<<endl;
    }
    if(kontrol==uz)
         cout<<"Palindrom";
    else cout<<"Not Palindrom";
}