#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output; 
    int k,n,d,c,va;
    while(cin>>k>>n, (n||k)){
        int sw=0;
        vector<int> v(k+10);
        for(int i=1;i<=k;i++){
            cin>>v[i];
        }
        while(n--){
            cin>>d >> c >> va;
            v[d] -=va;
            v[c] +=va;
        }
        for(int i=1;i<=k;i++){
            if(v[i]<0){
                cout<<'N'<<endl;
                sw=1;
                break;
            }
        }
        if(!sw){
            cout<<'S'<<endl;
        }
    }
}