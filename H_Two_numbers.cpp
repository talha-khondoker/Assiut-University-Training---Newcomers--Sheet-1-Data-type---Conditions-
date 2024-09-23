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
    double x, y;
    cin>>x>>y;
    cout<<"floor "<<x<<" / "<<y<<" = "<<floor(x/y)<<'\n';
    cout<<"ceil "<<x<<" / "<<y<<" = "<<ceil(x/y)<<'\n';
    cout<<"round "<<x<<" / "<<y<<" = "<<round(x/y)<<'\n';
    return 0;
}

// floor 10 / 3 = 3
// ceil 10 / 3 = 4
// round 10 / 3 = 3
