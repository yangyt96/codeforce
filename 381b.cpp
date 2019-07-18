#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin>>n;
    cin>>m;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int k,l;
    int sum=0,deduce=0;

    for(int i=0; i<m; i++){
        cin>>k;
        cin>>l;
        deduce=0;
        for(int j=k-1; j<l; j++){
            deduce=deduce+a[j];
        }
        if(deduce>0){
            sum=sum+deduce;
        }
    }
    cout<<sum;


    return 0;
}