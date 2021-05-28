#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int al;
    cout<<"Plase Enter How Many Rounds You Want To Play :";
    cin>>al;
    
    int o1[al],o2[al],d1,d2;
    
    for(int i=0;i<al;i++){
        
        d1=(rand() %6) +1;              //Birden başlayarak 6 sayı ilerisindeki sayı aralığında rastgele sayı getirir.
        d2=(rand() %6) +1;              //(rand() %15)+5 olsaydı 5-20 arasını getiricekti 
        
        o1[i]=d1;
        o2[i]=d2;
    }
    
    cout<<"\nP1 : ";
    for(int i=0;i<al;i++)
        cout<<o1[i]<<" ";
    
    cout<<endl<<"P2 : ";
    for(int i=0;i<al;i++)
        cout<<o2[i]<<" ";
        
    int kontrol=0;
    for(int i=0;i<al;i++){
        if(o1[i]>o2[i])
            kontrol++;
        else if(o1[i]<o2[i])
            kontrol--;
    }
    
    cout<<endl;
    if(kontrol==0)
        cout<<"Draw";
    else if( kontrol>0)
        cout<<"P1 is Winner";
    else
        cout<<"P2 is Winner";
}