#include <iostream>
using namespace std;

int kontrol(int dizi1[], int dizi2[] );
int hesapla(int dizi1[], int dizi2[]);

int main()
{
//tarih hesaplayan program yapmaya çalışıyorum
    int bugun[3]; // bu gün/ay/yıl;
    int istenilen[3]; // istenen gün/ay/yıl;

    cout << "--Please Enter A Today's Date--\n" ;cout << "Year : ";
    cin >> bugun[2];
    cout << "Month : ";
    cin >> bugun[1];
    cout << "Day : ";
    cin >> bugun[0];
    
    cout << "--Please Enter A Date You Want--\n"; cout << "Year : ";
    cin >> istenilen[2];
    cout << "Month : ";
    cin >> istenilen[1];
    cout << "Day : ";
    cin >> istenilen[0];
    
    if(kontrol(bugun,istenilen)==1){
        hesapla(bugun,istenilen);
    }
    else{
        cout<<"Error!! Pls Enter A Valid Date Next Time\n\n";
    }
}

int kontrol(int dizi1[], int dizi2[]){
    if( (dizi1[0] <0 || dizi2[0] <0) || (dizi1[0]>30 || dizi2[0]>30 )){
        return 0;
    }
    if(  (dizi1[1] <0 || dizi2[1] <0) || (dizi1[1]>12 || dizi2[1]>12 )){
        return 0;
    }
    return 1;
}

int hesapla(int dizi1[], int dizi2[]){
    
    int g,a,y,t; //gün ay yıl toplam
    
    if(dizi1[2]>dizi2[2]){                          //dizi1'in büyük oldupu senaryo
        y=dizi1[2]-dizi2[2];
        
        if(dizi1[1]>dizi2[1]) {                     //dizi1'in ayı büyükse
            a=dizi1[1]-dizi2[1];
            
                if(dizi1[0]>dizi2[0]){              //dizi1'in günü büyükse
                    g=dizi1[0]-dizi2[0];}   
                else{
                    a--;
                    g=(30-dizi2[0])+dizi1[0];}
                    
        }   else if(dizi2[1]>dizi1[1]) {        //dizi1'in ayı küçükse
            y--;
            a=(12-dizi2[1])+dizi1[1];
        }
        else{
            
        }
        
    }   else if(dizi2[2]>dizi1[2]){             //dizi2'nin büyün olduğu senaryo
        y=dizi2[2]-dizi1[2];
        
        if(dizi1[1]<dizi2[1])  //dizi1'nin ayı küçükse
            a=dizi2[1]-dizi1[1];
        else {
            y--;
            a=(12-dizi1[1])+dizi2[1];
        }
        
        //g=(dizi1[0]-dizi1[0])+dizi2[0];
    } else{
        y=0;
    }
    t=(y*365)+(a*30)+g;
    cout<<"\n \n"<<g<<": gün\n"<<a<<", "<<a*30<<" : ay\n"<<y<<", "<<y*365;
    cout<<endl<<"toplam ; "<<t<<endl;
    
}