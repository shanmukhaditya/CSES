#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        ll a, b, ans =1, x = 1e9 +7;
        cin >> a >> b;
        for(int j =0; j <b; j+=2 ){
            ans = (ans%x*a%x )%x ;
        }
        for(int j =1; j <b; j += 2){
            ans = (ans%x*a%x )%x ;
        }
        cout << ans%x << "\n"; 
    }
}