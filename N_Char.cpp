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
    char c;
    cin>>c;
    if(c>='A' && c<='Z')
    {
        char x=c+32;
        cout<<x;
    }
    else
    {
        char y=c-32;
        cout<<y;
    }
    return 0;
}
