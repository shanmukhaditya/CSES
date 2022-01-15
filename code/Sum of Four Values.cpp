#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e3;
int n, x, l ,r, j, k;
array <int,2> a[mx];

int main(){
    cin >> n >> x;
    for(int i=0; i<n; ++i){
        cin >> a[i][0], a[i][1] = i;
    }
    sort(a,a+n);
    j = 0;
    k = n-1;
    while(j< k){
        l = j+1;
        r = k-1;
        int s = 0;
        while(l < r){
             s = a[l][0] + a[r][0];
            if( a[j][0] + a[l][0] + a[r][0] + a[k][0]== x && (j!=l!=r!=k)){
                cout << a[j][1]+1 << " " << a[l][1]+1 << " " << a[r][1]+1 << " " << a[k][1]+1;
                //cout << a[j][0] << " " << a[l][0] << " " << a[r][0] << " " << a[k][0];
                return 0;
            }
            else if( a[j][0] + a[l][0] + a[r][0] + a[k][0] < x)
                ++l;
            else
            {
                --r;
            } 
        }
        if(a[j][0] + s + a[k][0] < x){
            ++j;
        }
        else
        {
            --k;
        }
        
    }
    cout << "IMPOSSIBLE";
}