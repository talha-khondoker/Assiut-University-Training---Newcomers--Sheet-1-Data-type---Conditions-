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
    vector<ll> a(3);
    vector<ll> b(3);
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        b[i]=x;
    }

    sort(a.begin(), a.end());
    for(int i=0; i<3; i++)
    {
        cout<<a[i]<<'\n';
    }
    cout<<'\n';
    for(int i=0; i<3; i++)
    {
        cout<<b[i]<<'\n';
    }
    return 0;
}
