#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s = "";

int main(){
    int q;
    ll k,n, count, val;
    cin >> q;
    for(int i =0; i<q ; ++i){
        cin >> k;
        n =1;
        count = 9ll*pow(10,n-1)*n;
        while(k>count){
            ++n;
            count += 9ll*pow(10,n-1)*n;
        }
        count -= 9ll*pow(10,n-1)*n;
        val = k -count-1;
        s =  to_string((ll)(pow(10,n-1) + val/n));
        cout << s[val%n]<< endl;
    }
}