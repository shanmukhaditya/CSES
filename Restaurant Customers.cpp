#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
    int n;
    cin >> n;
    set<ar<int,2>> s;
    for(int i =0; i< n; ++i){
        int a, b;
        cin >> a >> b;
        s.insert({a,1});
        s.insert({b+1, -1});
    }
    int ans= 0, c =0;;
    for(ar<int,2> i : s){
        c += i[1];
        ans = max(c,ans);
    }
    cout << ans;
}