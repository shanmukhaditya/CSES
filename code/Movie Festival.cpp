#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int mx = 2e5;
int main(){
    int n;
    cin >> n;
    ar<int,2> s[mx];
    for(int i =0; i< n; ++i){
        cin >> s[i][1] >> s[i][0];
    }
    int ans= 0, c =0;
    sort(s,s+n);
    for(int i = 0; i< n; ++i){
        
        if(s[i][1]>=c){
            
            ++ans;
            c = s[i][0];
        }
 
    }
    cout << ans;
}