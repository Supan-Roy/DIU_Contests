#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,P;
    int sum=0;
    cin>>N>>P;
    vector<int>a(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        if(a[i]<P)
        {
                sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}