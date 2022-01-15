#include <bits/stdc++.h>
using namespace std;
const int mx = 5e3;
int n,x, l ,r;
array <int,2> a[mx];


int main(){
    cin >> n >> x;
    for(int i=0; i<n; ++i){
        cin >> a[i][0], a[i][1] = i;
    }
    sort(a, a+n);
    for(int i =0; i<n-2; ++i){
        l = i+1;
        r = n-1 ;
        while(l<r){
            if( a[i][0] + a[l][0] + a[r][0] == x && (i!=l!=r)){
                cout << a[i][1]+1 << " " << a[l][1]+1 << " " << a[r][1]+1;
                return 0;
            }
            else if( a[i][0] + a[l][0] + a[r][0] < x)
                ++l;
            else
            {
                --r;
            }     
        }
    }
    cout << "IMPOSSIBLE";

}