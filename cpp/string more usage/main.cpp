#include <iostream>
#include <string.h>
using namespace std;

int boyut(char *p);
int main()
{
    char a[6]="ahmet";
    char *b="kuvarti";
    cout<<"(MyFunction)a length :"<<boyut(a)<<endl;
    cout<<"(strlen)b length :"<<strlen(b)<<endl;
    
    char *c= (char *)malloc(sizeof(char)*7);
    strcpy (c,b);       //kopyalar
    cout<<"c :"<<c;
    
}
int boyut(char *p){
    int say=0;
    char al=p[0];
    while(al!='\0'){
        al=p[++say];
    }
    return say;
}