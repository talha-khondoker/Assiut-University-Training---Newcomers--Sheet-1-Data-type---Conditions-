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
    ll x, y;
    cin>>x>>y;
    ll z=x*y;
    cout<<x<<" + "<<y<<" = "<<x+y<<'\n';
    cout<<x<<" * "<<y<<" = "<<z<<'\n';
    cout<<x<<" - "<<y<<" = "<<x-y<<'\n';
    return 0;
}
