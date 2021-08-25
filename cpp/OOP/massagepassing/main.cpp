#include <iostream>
using namespace std;

class yemek{
public:
    int kalori;
    int fiyat;
    int gram;
    int isitmak(int sure){
        if(sure<500)
            kalori+=sure;
        else kalori=0;
    }
};

class insan{          
public:
    int boy;
    float kilo;
    char gender;
    int yemek(yemek y){
        kilo+= (float) y.kalori/7000;
    }
};

int main(){
    yemek elma;
    elma.fiyat=2;
    elma.gram=50;
    elma.kalori=100;
    
    insan ahmet;
    ahmet.gender='m';
    ahmet.boy=192;
    ahmet.kilo=90;
    
    cout<<ahmet.kilo<<endl;
    ahmet.yemek(elma);
    cout<<ahmet.kilo<<endl;
    elma.isitmak(200);
    ahmet.yemek(elma);
    cout<<ahmet.kilo<<endl;
    elma.isitmak(1000);
    ahmet.yemek(elma);
    cout<<ahmet.kilo<<endl;
} 
