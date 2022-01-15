#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int p[n];
    for(int i =0; i<n;++i){
        cin >> p[i];
    }
    sort(p, p+n);
    ll ans=0;
    int c = n/2;
    for(int i=0; i<n;++i){
        ans += abs(p[c] - p[i]);
    }
    cout << ans;
}