#include <iostream>

using namespace std;

int kontrol(int deger);
int main()
{
    int asalmi;
    cout<<"Please enter a number : ";
    cin>>asalmi;
    
    cout<<asalmi
    if(kontrol(asalmi)==1)
        cout<<" is not prime\n";
    else cout<<" is prime\n";

    cout<<"Prime Numbers 0-"<<asalmi<<" ;\n";
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