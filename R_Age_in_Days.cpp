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
    int n;
    cin>>n;
    int y=0, m=0, d=0;
    while (n!=0)
    {
        if(n>=365)
        {
            y+=1;
            n=n-365;
        }
        else if(n>=30 && n<365)
        {
            m+=1;
            n=n-30;
        }
        else if(n<30 )
        {
            d+=n;
            n=n-d;
        }
    }
    cout<<y<<" years"<<'\n'<<m<<" months"<<'\n'<<d<<" days";
    return 0;
}
