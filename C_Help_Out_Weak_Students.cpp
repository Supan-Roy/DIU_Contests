#include <bits/stdc++.h>
using namespace std;

int main()
{
        int N;
        cin>>N;
        int marks[100];

        for(int i=0;i<N;i++)
        {
                int ID, score;
                cin>>ID>>score;
                marks[i] = score;
        }
        sort(marks, marks+N);
        int lowest = marks[0]+marks[1]+marks[2];
        if(lowest<150)
        {
                cout << "Counseling Support Required"<<endl;
        }
        else{
                cout<< "Counseling Support Not Required"<<endl;
                cout<< marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
        }
                return 0;
}