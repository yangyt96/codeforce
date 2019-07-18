#include <iostream>

#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    int in,out,remain=0,max=0;

    for(int k=0; k<n; k++){
        cin>>out>>in;
        remain=remain+in-out;
        if(remain>max){max=remain;}
    }
    cout<<max;

    return 0;
}