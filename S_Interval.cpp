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
    double n;
    cin>>n;
    if(n>=0 && n<=25)
    {
        cout<<"Interval [0,25]";
    }
    else if(n>25 && n<=50)
    {
        cout<<"Interval (25,50]";
    }
    else if(n>50 && n<=75)
    {
        cout<<"Interval (50,75]";
    }
    else if(n>75 && n<=100)
    {
        cout<<"Interval (75,100]";
    }
    else
    {
        cout<<"Out of Intervals";
    }
    return 0;
}

// [0,25], (25,50], (50,75], (75,100]