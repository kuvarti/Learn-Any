    
    yaz(dizi[0]);
    string yeni;
    
    

    if(dizi[0]!=dizi[1]){
        int indis=0;
        while(dizi[0]!=dizi[++indis]){
            yeni+=dizi[indis];
        }
        soy++;
        agac(yeni);
    }
    soy--;



    //cout<<"yeni :"<<dizi<<endl;
    if(dizi[0]==dizi[1]){
        yaz(dizi[0]);
        for(int i=2;i<dizi.length();i++){
            yeni+=dizi[i];
        }
        dizi=yeni;
        yeni="";
        agac(dizi);
    }
    

    /////en yakın 

    for(int i=0;i<dizi.length();i++){
        if(dizi[i]==dizi[i+1]){
            yaz(dizi[i]);
            for(int j=0;j<dizi.length();j++){
                if(j!=i&&j!=i+1)
                    yeni+=dizi[j];
            }
            soy=0;
            break;
        }else soy++;
    }
    dizi=yeni;
    yeni="";
    agac(dizi);

#include <iostream>
using namespace std;

class insan{
    public:
        int boy;
        char gender;
};

int main(){
    insan ahmet;
    ahmet.gender='m';
    ahmet.boy=192;
} 
