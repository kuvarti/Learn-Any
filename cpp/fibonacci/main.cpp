#include <iostream>
using namespace std;

int main () {
    int s1,s2,hafiza,enust;
    
    cout<<"Please Enter a number : ";
    cin>>enust;
    cout<<"fibonacci sequence until your number;\n";
    s1=0;s2=1;
    cout<<s1<<" ,"<<s2;
    while(true){
        hafiza=s1;
        s1=s2;
        s2=s1+hafiza;
        if(enust<s2) break;
        cout<<" ,"<<s2;
    }
}