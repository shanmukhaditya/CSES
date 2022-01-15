#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 2e5;
int n , m,k ,ap[mx], d[mx];


int main() {
    
    cin >> n >> m >> k;
    for(int i =0 ; i<n; ++i)
        cin >> ap[i];
    
    for(int i =0 ; i<m; ++i)
        cin >> d[i];
    sort( ap, ap+n);
    sort(d, d+m);
    int counter =0;

    for(int i = 0, j = 0; i< n; ++i){
        while (j<m && d[j]<ap[i]-k)
        ++j;
        if (j<m && d[j]<=ap[i]+k)
            ++counter,++j;
    }
    
    cout << counter;
}