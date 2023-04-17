#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    ll number;
    while(cin>>number,number!=0){
        //cout<<number<<endl;
        number= number%9;
        if(!number){
            number = 9;
        }
        cout<<number<<endl;
    }
}