#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> power_to(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> power_to[i];
    }
    int round = 0;
    int win = 0;
    sort(power_to.begin(), power_to.end());
    for (size_t i = 0; i < m; i++)
    {
        round++;
        bool isLose = false;
        int amount;
        cin >> amount;
        for (size_t i = 0; i < amount; i++)
        {
            int power;
            cin >> power;
            if (lower_bound(power_to.begin(), power_to.end(), power + 1) == power_to.end())
            {
                isLose = true;
                break;
            }
            
            if (*(lower_bound(power_to.begin(), power_to.end(), power + 1)) > power)
            {

                power_to.erase(lower_bound(power_to.begin(), power_to.end(), power + 1));
                if (i == amount-1)
                {
                    win++;
                }
                
            }
        }
        if (isLose)
        {
            break;
        }
    }
    if (win == m)
    {
        round++;
    }

    cout << round;
}