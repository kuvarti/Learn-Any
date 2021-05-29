#include <iostream>
using namespace std;

int f(int *p);
int carp(int *d, int b);
int main(){
    int a[3]={1,2,3}; cout<<"a[3]={1,2,3}"<<endl;
    cout<<"Before The f() :"<< a[2]<< endl;
    f(a);
    cout<<"After The f() :"<< a[2]<<endl;
    cout<<"multiply a[3] :"<< carp(a,3)<<endl<<endl;
    
    /* - - - - - - - - - - - - - - - - - - - - - - - */
    
    int *dizi;
    dizi=(int *)malloc(sizeof(int));
    
    cout<<"*dizi={";
    for(int i=1; i<4; i++){
        dizi[i-1]=i;
        cout<<i<<",";
    }
    cout<<"}"<<endl;
    cout<<"multiply *dizi : "<< carp(dizi,3)<<endl;
    
    
}
int carp(int *d, int b){
    int carp=1;
    for(int i=0;i<b;i++){
        carp*=d[i];
    }
    return carp;
}
int f(int *p){
    p[2]=10;
}