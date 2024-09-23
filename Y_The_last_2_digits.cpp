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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    ll all = a*b*c*d;
    ll x =  all % 100;
    if(x < 10) cout<<0<<x;
    else cout<<x;    
    return 0;
}
