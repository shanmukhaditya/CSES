#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ans = -1e18, mx = -1e18;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        ll a;
        cin >> a;
        mx = max(a, mx+a);
        ans = max(ans, mx);
    }
    cout << ans;
}