#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int k;
    cin>>k;
    string s[k];
    for(int i=0; i<k; i++){
        cin>>s[i];
    }
    for(int i=0; i<k; i++){
        int l=(s[i]).length();
        if(l<=10){cout<<s[i]<<endl;}
        else{cout<<s[i][0]<<l-2<<s[i][l-1]<<endl;}
    }



    return 0;
}