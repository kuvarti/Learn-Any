#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for( i=1; i<11; i++){
        for( j=1;j<11;j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }
}