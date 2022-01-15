#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n, x;
    cin >> n;
    set<int> p;
    for(int i =0; i< n; ++i){
    cin >> x;
    p.insert(x);
    }
    cout<< p.size();

}