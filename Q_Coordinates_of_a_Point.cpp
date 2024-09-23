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
    if(x>0 && y>0)
    {
        cout<<"Q1";
    }
    else if(x<0 && y>0)
    {
        cout<<"Q2";
    }
    else if(x<0 && y<0)
    {
        cout<<"Q3";
    }
    else if(x>0 && y<0)
    {
        cout<<"Q4";
    }
    else if(x==0 && y==0)
    {
        cout<<"Origem";
    }
    else if(x!=0 && y==0)
    {
        cout<<"Eixo X";
    }
    else if(x==0 && y!=0)
    {
        cout<<"Eixo Y";
    }
    return 0;
}