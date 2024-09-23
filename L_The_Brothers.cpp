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
    string s1, s2;
    string k1, k2;
    cin>>s1>>s2;
    cin>>k1>>k2;
    if(s2!=k2)
    {
        cout<<"NOT";
    }
    else
    {
        cout<<"ARE Brothers";
    }
    return 0;
}
