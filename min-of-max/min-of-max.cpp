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
    cin >> n >> m;
    vector<int> powers(n);
    vector<int> types(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> powers[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> types[i];
    }

    // พลังประเภท i, init = 1
    vector<int> max_power(m, 1);

    // Min on top
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < m; i++)
    {
        pq.push({1, i});
    }

    for (int i = 0; i < n; i++)
    {
        int power = powers[i];
        int type = types[i];

        // if new > old || > 1
        max_power[type] = max(max_power[type], power);

        // for sort for min
        pq.push({max_power[type], type});

        // top เป็นอันเก่า
        while (pq.top().first != max_power[pq.top().second])
        {
            pq.pop();
        }

        // print min pair
        cout << pq.top().first << " ";
    }
    return 0;
}