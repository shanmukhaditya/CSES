#include <bits/stdc++.h>
using namespace std;
#define long long ll

vector<int> k ;
void search(int i){

    if (i == 4){
        for (int j :k)
        cout << j <<" ";
        
        cout << "\n";
    }
    else{
        search(i+1);
        k.push_back(i);
        search(i+1);
        k.pop_back();
    }

}

int main(){
search(0);

}