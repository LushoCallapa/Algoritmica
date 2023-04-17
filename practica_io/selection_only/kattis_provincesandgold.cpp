#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define ll long long int
using namespace std;
int main(){
    input;
    output;
    int g,s,c;

    cin >> g >> s >> c;

    g *= 3;
    s *= 2;

    int res = g + s + c;

    if (res > 1){
        if (res > 7)
            cout << "Province";
        else if (res > 4)
            cout << "Duchy";
        else
            cout << "Estate";

        cout << " or ";
    }

    if (res > 5)
        cout << "Gold" << endl;
    else if (res > 2)
        cout << "Silver" << endl;
    else 
        cout << "Copper" << endl;

}