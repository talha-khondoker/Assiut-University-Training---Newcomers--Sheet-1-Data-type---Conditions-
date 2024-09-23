#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin>>x;
    ll xx;
    cin>>xx;
    char c;
    cin>>c;
    float f;
    cin>>f;
    double d;
    cin>>d;
    cout<<x<<'\n'<<xx<<'\n'<<c<<'\n'<<f<<'\n'<<d<<'\n';
    return 0;
}

// int : 32 Bit integer.
// long long : 64 bit integer
// Char : 8 bit Characters & symbols
// Float : 32 bit real value
// Double : 64 bit real value