#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator, int>> &multiply)
{
    // write your code here
    vector<int> result;
    int current_index = 0;

    sort(multiply.begin(), multiply.end());

    for (const auto &p : multiply)
    {
        int index = p.first - v.begin();
        int amount = p.second;

        while (current_index < index)
        {
            result.push_back(v[current_index]);
            current_index++;
        }

        for (int i = 0; i <= amount; i++)
        {
            result.push_back(v[current_index]);
        }
        current_index++;
    }

    while (current_index < v.size())
    {
        result.push_back(v[current_index]);
        current_index++;
    }
    result.size();
    v = move(result);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator, int>> multiply(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        multiply[i].first = v.begin() + a;
        multiply[i].second = b;
    }
    member_multiply(v, multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}