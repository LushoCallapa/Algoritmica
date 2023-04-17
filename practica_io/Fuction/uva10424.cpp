#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;


int main(){
    input;
    output;
    string x,y;
    while(getline(cin,x)){
        getline(cin,y);
        int valorx = 0, valory = 0;
        for(int i=0;i<x.size();i++){
            if(x[i]>=65 and x[i]<=90){
                x[i]=tolower(x[i]);
            }
            if(x[i]>=97 and x[i]<=122){
                valorx += (int)x[i] - 96;
            }
        }
        for(int i=0;i<y.size();i++){
            if(y[i]>=65 and y[i]<=90){
                y[i]=tolower(y[i]);
            }
            if(y[i]>=97 and y[i]<=122){
                valory += (int)y[i] - 96;
            }
        }
        if(valorx>=10){
            valorx%=9;
            if(!valorx){
                valorx = 9;
            }
        }
        if(valory>=10){
            valory%=9;
            if(!valory){
                valory = 9;
            }
        }
        double ans = (double) min(valorx,valory) / (double) max(valorx,valory) ;
        ans = ans*100;
        printf("%.2f %\n",ans);
    }
}