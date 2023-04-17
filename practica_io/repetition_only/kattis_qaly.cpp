#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    double res=0.0;
    int n;
    cin>>n;
    while(n--){
        double a,b;
        cin>>a>>b;
        res+=a*b;
    }
    printf("%.3f",res);
}