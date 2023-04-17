#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    int n,a,b,c;
    cin>>n;
    for(int i=0; i< n ;i++){
        cin>>a>>b>>c;
        if(a< 21 and b<21 and c < 21)
            cout<<"Case "<<i+1<<": good"<<endl;
        else
            cout<<"Case "<<i+1<<": bad"<<endl;
    }
}