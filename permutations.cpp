#include <bits/stdc++.h>
using namespace std;
#define long long ll

int p[48], ans = 0;

int main()
{
    iota(p, p + 48, 0);
    cout << p <<"\n";
    do
    {
        ++ans;

    } while (next_permutation(p, p + 48));
    cout << ans << "\n";
}