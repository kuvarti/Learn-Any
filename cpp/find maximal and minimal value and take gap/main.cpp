#include <iostream>
using namespace std;

int enk(int *p, int boyut);
int enbk(int *p, int boyut);
int enb(int *p, int boyut);

int main(){
    cout<<"Please enter a array.System will take your number until you enter 0\n";
    int *a= (int *)malloc(sizeof(int));
    int dgr, say=0;
    do{
        cin>>dgr;
        if(dgr!=0){
            *(a+say)=dgr;
            say++;
        }
    }while(dgr!=0);
    cout<<endl<<endl;
    cout<<enb(a,say) - enk(a,say)<<endl;
    cout<<enbk(a,say);
}
int enk(int *p, int boyut){     //sadece en kucuğu alıyor
    int kucuk=INT_MAX;
    for(int i=0;i<boyut;i++){
        if(kucuk>p[i])  //
            kucuk=p[i];
    }
    return kucuk;
}
int enb(int *p, int boyut){     //sadece en buyuğu alıyor
    int buyuk=INT_MIN;
    for(int i=0;i<boyut;i++){
        if(buyuk<p[i])  //
            buyuk=p[i];
    }
    return buyuk;
}
int enbk(int *p, int boyut){    //ikisinide alıyor
    int buyuk=INT_MIN;      //dizinin içinden herhangi bir sayı da koyabilirdim oda işimi görürdü yani;
    int kucuk=INT_MAX;      // kucuk=p[0]   buyuk=p[0] yapsamda olurdu.
    for(int i=0;i<boyut;i++){
        if(buyuk<p[i])
            buyuk=p[i];
        if(kucuk>p[i])
            kucuk=p[i];
    }
    return buyuk-kucuk;
}