#include <bits/stdc++.h>
using namespace std;
int main()
{
        int N, maxYogurt = 0, maxIndex = 0;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
                int yogurt;
                cin >> yogurt;

                if (yogurt > maxYogurt || (yogurt == maxYogurt && i > maxIndex))
                {
                        maxYogurt = yogurt;
                        maxIndex = i;
                }
        }

        cout << maxIndex + 1 << endl;
        return 0;
}