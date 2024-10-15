#include <bits/stdc++.h>
using namespace std;
map<int, int> mapp;
int main()
{
    int n, m, k, num, ch = 0, ans = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        mapp[num]++;
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &num);
            if (ch)
                continue;
            auto it = mapp.upper_bound(num);
            if (it == mapp.end())
            {
                ch = 1;
                ans = i;
            }
            else
            {
                int idx = it->first;
                mapp[idx]--;
                if (!mapp[idx])
                    mapp.erase(idx);
            }
        }
    }
    if (ch)
        printf("%d\n", ans);
    else
        printf("%d\n", m + 1);
    return 0;
}
