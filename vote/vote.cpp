#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    map<string, int> mp;
    int candidates = 0;
    cin >> n >> k;
    for (size_t i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (mp.find(name) != mp.end())
        {
            mp[name] += 1;
        }
        else
        {
            mp[name] = 1;
            candidates++;
        }
    }

    vector<int> all_amount;
    bool isSkip;
    for (auto item : mp)
    {
        // cout << item.first << " " << item.second << endl;
        all_amount.push_back(item.second);
    }

    sort(all_amount.begin(), all_amount.end());

    auto it = all_amount.begin();

    // cout << k << " " << candidates << endl;
    // for (auto item : all_amount)
    // {
    //     cout << item << " ";
    // }
    
    if (k >= candidates)
    {
        cout << *it;
        isSkip = true;
    }

    int count = 0;
    if (!isSkip)
    {
        for (auto it = all_amount.rbegin(); it != all_amount.rend(); it++)
        {
            // cout << *it << endl;
            count++;
            if (count == k)
            {
                cout << *it;
                break;
            }
        }
    }
    // cout << isSkip;
}