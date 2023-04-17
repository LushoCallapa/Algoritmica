#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output; 
    int n;
    cin>>n;
    while(n--){
        int res=0,aux=1;
        string x;
        cin>>x;
        for(int i=0;i<x.length();i++){
            if(x[i]=='O'){
                res+=aux;
                aux++;
            }
            else
                aux=1;
        }
        cout<<res<<endl;
    }
}