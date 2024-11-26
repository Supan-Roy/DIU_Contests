#include <bits/stdc++.h>
using namespace std;

int main()
{
        int N, D;
        cin >> N >> D;
        int a[N];
        for (int i = 0; i < N; i++)
        {
                cin >> a[i];
        }

        for (int i = 0; i < N; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        if (a[j] + D == a[i])
                        {
                                cout << "Yes" << endl;
                                return 0;
                        }
                }
        }
        cout << "No" << endl;
        return 0;
}
