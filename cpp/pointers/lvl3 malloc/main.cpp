#include <iostream>
using namespace std;
/*
 * 
 * '&'    değişkenin kendi adresini gösteriyor
 * '*'      bağlandığı değişkenin değerini gösterir
 * 
 * int  a[3];  aynı islemi yapar
 * int *a= (int *)malloc(sizeof(int)*3); //aynı işlemi yapar
 */
int f(int *p){
    *p=50;
}

int main()
{
    int *a= (int *)malloc(sizeof(int));
    *a=5;
    cout<<*a<<endl;
    f(a);
    cout<<*a<<endl<<endl;
    
    int *d=(int *)malloc(sizeof(int)*3);
    d[2]=30;
    cout<<d[2];
}