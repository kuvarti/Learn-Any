#include <iostream>
using namespace std;

int main()
{
    int dizi1[3][3]={1,2,3,4,5,6,7,8,9};
    int dizi2[3][3]={11,12,13,14,15,16,17,18,19};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            dizi1[i][j]+=dizi2[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<dizi1[i][j]<<" ";
        }
        cout<<endl;
    }
}