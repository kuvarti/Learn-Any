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

int main()
{
    int dgr,say=0;
    int *a= (int *)malloc(sizeof(int));
    cout<<"System will take your number until you enter 0\n";
    do{
        cin>>dgr;
        if(dgr!=0){
            *(a+say)=dgr;
            say++;
        }
    }while(dgr!=0);
    
    cout<<endl<<endl<<"Bastırılıyor : ";
    for(int i=0;i<say;i++){
        cout<<*(a+i);
    }
}