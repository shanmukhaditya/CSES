#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int len =0,start =0;
    map <int,int> m;
    int n;
    cin >> n;
    
    for(int i =0; i<n ; ++i){
        int a;
        cin >> a;
        if( m.find(a) != m.end()){
            start = max(start, m[a]+1);
        }
        len = max(i-start+1,len);
        m[a] = i;
    }
    cout << len;
}