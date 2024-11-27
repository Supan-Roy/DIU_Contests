#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;

    for(int i=0;i<n;i+=2)
    {
        if(a[i]==k||a[i+1]==k){
                cout<<(i/2)+1<<endl;
        }
    }
    return 0;
}