#include <iostream>

using namespace std;

int kontrol(int deger);
int main()
{
    int asalmi;
    cout<<"Bir Sayı Giriniz : ";
    cin>>asalmi;
    
    if(kontrol(asalmi)==1)
        cout<<"Girdiğiniz sayi Asal değildir\n";
    else cout<<"Girdiğiniz sayi Asaldır\n";
    
    cout<<"0dan girdiğiniz sayıya kadar olan sayılardan asal olanlar ;\n";
    for(int i=2;i<(asalmi+1);i++){
        if( kontrol(i)==1 ){ }
        else cout<<i<<" - ";
    }
}

int kontrol(int deger)
{
    for(int i=2; i<deger; i++){
        if(deger%i==0){
            return 1;
        }
    }
    return 0;
}