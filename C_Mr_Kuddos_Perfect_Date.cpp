#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];

    }
    sort(prices.begin(),prices.end());
    int minEle=prices[0];
    int maxEle=prices[n-1];
    int sum=minEle+maxEle;
    cout<<sum<<endl;
    return 0;
}