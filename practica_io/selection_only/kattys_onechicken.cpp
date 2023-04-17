#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;
int main(){
    input;
    output;
    int a,b;
    cin>>a>>b;
    int ans=abs(a-b);
    if(a>b){
        printf("Dr. Chaz needs %d more",ans);
        if(ans == 1)
            printf (" piece ");
        else
            printf (" pieces ");
        printf("of chicken!\n");
    } 
    else 
    {
        printf ("Dr. Chaz will have %d",ans);
        if(ans == 1)
            printf (" piece ");
        else
            printf (" pieces ");
        printf("of chicken left over!\n");
    }
}