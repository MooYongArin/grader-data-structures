#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> ans;
    int Q;
    cin >> Q;
    for (size_t i = 0; i < Q; i++)
    {
        string func;
        int n;
        cin >> func;
        if (func == "pb")
        {
            cin >> n;
            ans.push_back(n);
        }
        if (func == "sa")
        {
            sort(ans.begin(), ans.end());
        }
        if (func == "sd")
        {
            sort(ans.begin(), ans.end(), greater<int>());
        }
        if (func == "r")
        {
            reverse(ans.begin(), ans.end());
        }
        if (func == "d")
        {
            cin >> n;
            ans.erase(ans.begin() + n);
        }
    }
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }
}