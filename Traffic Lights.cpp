#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , x ;
    cin >> n >> x;
    set <int > s;
    map <int , int > m;
    s.insert(0);
    s.insert(n);
    m[n] = 1;
    for(int i =0; i<x ; ++i){
        int a;
        cin >> a;
        auto it = s.lower_bound(a);
        int r = *it;
        --it;
        int l = *it;
        --m[r-l];
        if (!m[r-l])
            m.erase(r-l);
        ++m[r-a];
        ++m[a-l];
        s.insert(a);
        cout << (--m.end()) ->first << " ";
    }

}