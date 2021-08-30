#include <iostream>
using namespace std;
//encapsullation

class dikdortgen{
    private:
        int en;
        int boy;
    public:
        int alan();
        int cevre();
        //
        int getEn();
        void setEn(int e);
        int getBoy();
        void setBoy(int b);
};
int dikdortgen::alan(){
    return en*boy;}
int dikdortgen::cevre(){
    return ((en+boy)*2);}
//
int dikdortgen::getEn(){ return en; }
int dikdortgen::getBoy(){ return boy; }
void dikdortgen::setEn(int e){ en=e; }
void dikdortgen::setBoy(int b){ boy=b; }

int main(){
    dikdortgen d1;
    d1.setEn(5);
    d1.setBoy(10);
    
    cout<<"Alan :"<<d1.alan()<<endl;
    cout<<"cevre :"<<d1.cevre()<<endl;
}
