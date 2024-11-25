#include <bits/stdc++.h>
using namespace std;
int main()
{
        int N;
        cin >> N;
        vector<int>scores(N);
        for(int i=0;i<N;i++)
        {
                cin>>scores[i];
        }
        sort(scores.rbegin(),scores.rend());
        cout << "Shortlisted Candidates : "<<endl;
        for(int i=0;i<3;i++){
                cout<<scores[i]<<" ";
        }
         return 0;
}