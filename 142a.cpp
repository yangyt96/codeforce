#include <iostream>
using namespace std;

int main()
{
    int s,n;
    cin>>s;
    cin>>n;
    int x[n],y[n];


    for(int i=0; i<n; i++){
        cin>>x[i];
        cin>>y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]>x[j]){
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        if(s>x[i]){s=s+y[i];}
        else{cout<<"NO"; return 0;}
    }
    cout<<"YES";
    return 0;
}