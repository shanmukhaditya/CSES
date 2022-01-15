#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int mx = 2e5;
int n, b[mx];

int main(){
    cin >> n;
    ll s =0;
    for(int i=0;i<n; ++i)
        cin >> b[i], s += b[i];
    sort(b,b+n);
    cout << max(s, 2ll*b[n-1]) << " s: " << s;
    
}