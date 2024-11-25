#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;
    cin>>M>>N;
    for (int i = 0; i < M; i++)
    {
        int A;
        cin>>A;
        if(A==N)
        {
                cout << "I know! Nobody will get it"<<endl;
                return 0;
        }
        
    }
    cout << "Really! I did not know that!" << endl;
    return 0;
}