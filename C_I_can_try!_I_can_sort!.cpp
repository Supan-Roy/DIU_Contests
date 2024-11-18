#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin >> t;

        while (t--)
        {
                int n, m;
                cin >> n >> m;

                vector<int> toys(n + m);
                for (int i = 0; i < n + m; i++)
                {
                        cin >> toys[i];
                }

                sort(toys.rbegin(), toys.rend());

                for (int size : toys)
                {
                        cout << size << " ";
                }
                cout << endl;
        }

        return 0;
}