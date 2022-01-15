#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, ans =0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        int a ;
        cin >> a;
        int p = upper_bound(v.begin(), v.end(),a)- v.begin();
        //cout << p << " " << i << " ";
        if(p<v.size()){
            //cout << 1 << endl;
            v[p] =a;
        }
        else{
            //cout << 2 << endl;
            v.push_back(a);
        }
       
    }
    cout << v.size();
}