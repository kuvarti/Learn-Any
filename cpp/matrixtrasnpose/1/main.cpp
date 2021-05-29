#include <iostream>
using namespace std;

int main()
{
    int dizi[3][3]={1,2,3,4,5,6,7,8,9};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<dizi[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int bas[3][3];                      //Matrix Transpose
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            bas[j][i]=dizi[i][j];
        }
    }
    
    cout<<endl<<endl;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<bas[i][j]<<" ";
        }
        cout<<endl;
    }
}