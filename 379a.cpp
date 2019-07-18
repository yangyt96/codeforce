#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int a=0, d=0;
    for(int i=0; i<n; i++){
    
        if(s[i]=='A'){a=a+1;}
        else if(s[i]=='D'){d=d+1;}
    }
    if(a>d){cout<<"Anton";}
    else if(d>a){cout<<"Danik";}
    else{cout<<"Friendship";}
    return 0;
}