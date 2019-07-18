#include <iostream>

#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a,b;
    int k=0;
    for(int i=0; i<n; i++){
        b=0;
        for(int j=0; j<3; j++){
            cin>>a;
            b=b+a;

        }if(b>=2){k++;}
    }
    cout<<k;

    return 0;
}