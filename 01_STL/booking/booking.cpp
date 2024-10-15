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

    int n, m;
    set<pair<string, string>> available;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        string airline, seat_num;
        cin >> airline >> seat_num;
        available.insert({airline, seat_num});
    }

    for (size_t i = 0; i < m; i++)
    {
        int kj;
        cin >> kj;
        bool isNo = false;

        set<pair<string, string>> to_erase;
        for (size_t j = 0; j < kj; j++)
        {
            string airline, seat_num;
            cin >> airline >> seat_num;
            auto it = lower_bound(available.begin(), available.end(), make_pair(airline, seat_num));

            if (available.find({airline, seat_num}) == available.end())
            {
                isNo = true;
                to_erase.clear();
            }
            else
            {
                if (!isNo)
                {
                    to_erase.insert({airline, seat_num});
                }
            }
        }
        if (!isNo)
        {
            cout << "YES" << endl;
            for (const auto &seat : to_erase)
            {
                available.erase(seat);
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}