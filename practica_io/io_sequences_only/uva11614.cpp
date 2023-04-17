#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    int t;
    cin>>t;
    while(t--){
        ll n,ans;
        cin>>n;
        ans = (n*(ll)(2*4))+(ll)1;
        //cout<<ans<<endl;
        ans = sqrt(ans);
        //cout<<ans<<endl;
        ans = abs(1-ans)/(ll)2;
        cout<< ans<<endl; 
    }
}