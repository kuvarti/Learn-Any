#include <iostream>
using namespace std;

class insan{
    public:
        int boy;
        char gender;
};

class dikdortgen{
    public:
        int en;
        int uzunluk;
        int alan();
        int cevre(){
            return ((en+uzunluk)*2);
        }
};
int dikdortgen::alan(){
    return en*uzunluk;
}

int main(){
    insan ahmet;
    ahmet.gender='m';
    ahmet.boy=192;
    
    dikdortgen d1;
    d1.en=5;
    d1.uzunluk=10;
    
    cout<<"Alan :"<<d1.alan()<<endl;
    cout<<"cevre :"<<d1.cevre()<<endl;
}
