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
    int a1 , a2 , b1 , b2;
    cin >> a1 >> a2  >> b1 >> b2;
    if (max(a1,b1) > min(a2,b2))
    cout << "-1";
    else 
    cout << max(a1,b1) << " " << min(a2,b2);
    return 0;
}
