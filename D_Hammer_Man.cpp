#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,H;
    cin>>N>>H;
    vector<int>a(N);
    for(int &P : a)
    cin>>P;
    sort(a.begin(), a.end(), greater<int>());
    int d=0;
    for(int i=0; i<N and H>0; i++)
    {
        while(a[i]<=H)
        {
                d+=(H/a[i]);
                H%=a[i];
        }
    }
    if(d==1)
    {
        cout<<d<<" pin"<<endl;
    }
    else{
        cout<<d<<" pins"<<endl;
    }
    return 0;
}