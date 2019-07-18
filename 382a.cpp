#include <iostream>

using namespace std;

int main()
{
    int k,n;
    string s;
    cin>>n;
    cin>>k;
    cin>>s;
    int G;
    for(G=0; G<n; G++){
        if(s[G]=='G'){
            break;
        }
    }
    
    int flag=0;
    for(int i=G; i<n; i=i+k){

        if(s[i]=='#'){break;}
        else if(s[i]=='T'){flag=1;break;}
    }
    if(flag!=1){

    for(int i=G; i>=0; i=i-k){
            
        if(s[i]=='#'){break;}
        else if(s[i]=='T'){flag=1;break;}
    }
    }
    if(flag==1){cout<<"YES";}
    else{cout<<"NO";}


    return 0;
}