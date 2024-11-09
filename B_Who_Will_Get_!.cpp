#include <bits/stdc++.h>
using namespace std;

int main()
{
        int X, P;
        cin >> X >> P;

        for (int i = 0; i < X; i++)
        {
                int A;
                cin >> A;
                if (A == P)
                {
                        cout << "Senti Aunti Ramva will never be mine" << endl;
                        return 0; 
                }
        }

        cout << "Senti Aunti Ramva is mine" << endl;
        return 0;
}