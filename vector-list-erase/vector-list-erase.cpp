#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos)
{
    // write your code here
    vector<int> result;
    int current_index = 0;

    sort(pos.begin(), pos.end());
    
    for (const int p : pos)
    {
        while (current_index != p)
        {
            result.push_back(v[current_index]);
            current_index++;
        }
        current_index++;
    }
    while (current_index < v.size())
    {
        result.push_back(v[current_index]);
        current_index++;
    }
    
    
    v = move(result);
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> pos[i];
    list_erase(v, pos);
    cout << "After call list_erase" << endl
         << "Size = " << v.size() << endl;
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}