#include <iostream>

using namespace std;


int main()
{
    int k[3],k3,temp;
    cin>>k[0];
    cin>>k3;
    cin>>k[1];
    cin>>k[2];
    temp=k[0];
    for(int i=1; i<3; i++){
        if(temp>k[i]){temp=k[i];}
    }
    int sum=256*temp;
    k[0]=k[0]-temp;
    if(k[0]>k3){cout<<(sum+32*k3);}
    else{cout<<(sum+32*k[0]);}
    return 0;
}