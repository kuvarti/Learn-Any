#include <iostream>
using namespace std;

int main()
{
    int dizi[3][3]={1,2,3,4,5,6,7,8,9};
    int tut;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<dizi[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++){               //matrix pranspose
        for(int j=i+1;j<3;j++){
            tut=dizi[i][j];
            dizi[i][j]=dizi[j][i];
            dizi[j][i]=tut;
        }
    }
    
    cout<<endl<<endl;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<dizi[i][j]<<" ";
        }
        cout<<endl;
    }
}