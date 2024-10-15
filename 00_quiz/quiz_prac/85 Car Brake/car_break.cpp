#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    map<int, int> mp;
    int n, m, k;
    cin >> n >> m >> k;
    for (size_t i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;
        mp[t] = d;
    }
    for (size_t i = 0; i < m; i++)
    {
        int a, q;
        cin >> a >> q;
        if (a == 1)
        {
            auto it = mp.begin();
            if (q < it->first)
            {
                std::cout << k << endl;
            }
            else
            {
                auto last_decrease = mp.lower_bound(q);
                last_decrease++;
                int decreased = 0;
                while (it != last_decrease)
                {
                    decreased += it->second;
                    it++;
                }
                std::cout << k - decreased << endl;
            }
        }
        else if (a == 2)
        {
            if (q > k)
            {
                std::cout << 0 << endl;
            }
            else
            {
                int current_spd = k;
                auto it = mp.begin();
                while (current_spd >= q)
                {
                    current_spd -= it->second;
                    it++;
                }
                it--;
                std::cout << it->first << endl;
            }
        }
    }

    return 0;
}