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
int aa(int a);
int bb(int *b);

int main()
{
    int a=10;
    int *p; p=&a;
    aa(a);
    cout<<"aa(a) :"<<a<<endl;
    bb(p);
    cout<<"bb(p) :"<<*p<<endl;
}
int aa(int a){//call by value       -kendi değişkenini oluşturur
    a=20;
}
int bb(int *b){//call by reference      -aldığı değişkenle işlem yapar
    *b=30;
}