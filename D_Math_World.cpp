#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p,q,r;
    cin>>p>>q>>r;
    int countP=0, countQ=0, countR=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==p) countP++;
        if(a[i]==q) countQ++;
        if(a[i]==r) countR++;
    }
    if(countP>0&&countQ>0&&countR>>0)
    {
        cout<<p*q*r<<endl;
    }
    else {
        int sum=0;
        if(countP>0) sum+=p;
        if(countQ>0) sum+=q;
        if(countR>0) sum+=r;
        cout<<sum<<endl;
    }
   
    return 0;
}