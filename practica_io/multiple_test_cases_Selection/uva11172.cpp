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
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<'='<<endl;
        else if(a>b)
            cout<<'>'<<endl;
        else
            cout<<'<'<<endl;
    }
}