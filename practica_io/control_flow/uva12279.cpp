#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    int n;
    for(int i=0;cin>>n,n!=0;i++){
        int a,ans = 0;
        while(n--){
            cin>>a;
            if(a)
                ans++;
            else
                ans--;
        }
        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
}