#include <iostream>
using namespace std;
/*
 * 
 * '&'    değişkenin kendi adresini gösteriyor
 * '*'      bağlandığı değişkenin değerini gösterir
 * 
 * &a=p
 * a=*p
 */


int main()
{
    int a=10,*p;
    //p=a;          //bu şekil işlem yapılamaz
    p=&a;
    
    cout<<" a : "<<a;
    cout<<"\n &a = "<<&a;
    cout<<"\n *p : "<<*p;
    cout<<"\n P : "<<p;
    cout<<"\n &p : "<<&p;
    
    *p=20;
    cout<<"\n a : "<<a;
}