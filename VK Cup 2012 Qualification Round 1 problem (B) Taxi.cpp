#include <iostream>
using namespace std;

int main()
{
    int g;
    int a;
    cin>>g;
    int sum=0;
    int k1=0,k2=0,k3=0;
    for(int i=0; i<g; i++){
        cin>> a;
        if(a==1){k1++;}
        else if(a==2){k2++;}
        else if(a==3){k3++;}
        else if(a==4){sum++;}
    }
 

    sum=sum+k3;
    k1=k1-k3;
    if(k1<0){k1=0;}
    
    sum=sum+k2/2;
    k2=k2%2;
    if(k2==1){
        sum++;
        k1=k1-2;
        if(k1<0){k1=0;}
    }
    sum=sum+k1/4;
    if(k1%4>0){sum++;}
        
    cout<<sum;



    return 0;
}