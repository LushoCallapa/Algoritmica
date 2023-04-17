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
    for(int i=0;i<t;i++){
        int n,a,ans = 0;
        cin>>n;
        while(n--){
            cin>>a;
            ans = max(ans,a);
        }
        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
}