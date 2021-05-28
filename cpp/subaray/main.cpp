#include <iostream>
using namespace std;

int main()
{
    int a[3]={3,7,11};
    int b[7]={5,3,9,8,7,1,8};
    
    int benzerlik;int oncekidurum;
    for(int i=0; i<3;i++){
        for(int j=0; j<7;j++){
            if(a[i]==b[j]){
                benzerlik++;
                break;
            }
        }
    }
    if(benzerlik==3){
        cout<<"a substring of b";
    }
}