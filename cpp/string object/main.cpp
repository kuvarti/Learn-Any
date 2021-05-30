#include <iostream>
using namespace std;

int main()
{
    string a;           //http://www.cplusplus.com/reference/string/string/
    char *p="kuvarti";
    a=p;
    cout<<"a :"<<a<<endl;
    cout<<"a length :"<<a.size()<<endl;
    a.append(" is best");
    cout<<"Appended a :"<<a<<endl;
}