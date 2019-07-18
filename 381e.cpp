#include <iostream>

using namespace std;

int main()
{
    
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    double p[n], u[n];

    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        cin>>u[i];
    }
    //-----------------------------
    //sort p
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(p[i]<p[j]){
                swap(p[i],p[j]);
                swap(u[i],u[j]);
            }
        }
    }
    int atemp=a,btemp=b;
    double max1=0;
    for(int i=0; i<atemp; i++){
        max1=max1+p[i];
        if(p[i]!=1. && u[i]!=0. && btemp!=0){
            max1=max1+((1.-p[i])*u[i]);
            btemp--;
        }
    }
    //sort u
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(u[i]<u[j]){
                swap(p[i],p[j]);
                swap(u[i],u[j]);
            }
        }
    }
    for(int i=0; i<btemp; i++){
        max1=max1+u[i];
    }
    //reverse
    atemp=a,btemp=b;
    double max2=0;
    for(int i=0; i<btemp; i++){
        max2=max2+u[i];
        if(u[i]!=1. && p[i]!=0. && atemp!=0){
            max2=max2+((1.-u[i])*p[i]);
            atemp--;
        }
    }
    //sort p
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(p[i]<p[j]){
                swap(p[i],p[j]);
                swap(u[i],u[j]);
            }
        }
    }
    for(int i=0; i<atemp; i++){
        max2=max2+p[i];
    }
    double max=max1;
    if(max<max2){max=max2;}
    cout<<max;
    return 0;
}