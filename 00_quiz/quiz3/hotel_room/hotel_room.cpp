#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    int n, m, all_reserve = 0;
    map<int, int> mp;
    cin >> n >> m;

    vector<int> reserve(n + 1);
    for (size_t i = 1; i <= n; i++)
    {
        int r;
        cin >> r;
        reserve[i] = r;
        mp[r] = i;
        all_reserve += r;
    }
    while (m--)
    {
        int amount;
        bool isFound = false;
        vector<pair<int, int>> to_print;
        cin >> amount;
        if (amount > all_reserve)
        {
            cout << -1 << "\n";
            continue;
        }

        for (size_t i = reserve.size() - 1; i > 0; i--)
        {
            if (amount <= reserve[i])
            {
                reserve[i] -= amount;
                all_reserve -= amount;
                to_print.push_back({i, amount});
                isFound = true;
                break;
            }
        }
int max = reserve[1], pos_max = 1;
        while (!isFound)
        {

            for (size_t i = reserve.size() - 1; i > 0; i--)
            {
                if (reserve[i] > max)
                {
                    max = reserve[i];
                    pos_max = i;
                }
            }
            to_print.push_back({pos_max, reserve[pos_max]});
            all_reserve -= reserve[pos_max];
            reserve[pos_max] = 0;

            for (size_t i = reserve.size() - 1; i > 0; i--)
            {
            if (amount <= reserve[i])
                {
                reserve[i] -= amount;
                all_reserve -= amount;
                to_print.push_back({i, amount});
                isFound = true;
                break;
                }
            }
        }
        
        

        sort(to_print.begin(), to_print.end());
        for (auto &i : to_print)
        {
            cout << i.first << " " << i.second << " ";
        }
        cout << "\n";
    }
    
}

// auto it = mp.upper_bound(amount);
        // while (it == mp.end())
        // {
        //     it--;
        //     to_print.push_back({it->second, it->first});
        //     amount -= it->first;
        //     mp.erase(it);
        //     it = mp.upper_bound(amount);
        // }

        // to_print.push_back({it->second, it->first});
        // amount -= it->first;
        // it->first -= amount;