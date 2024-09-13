#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>


using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> sorted_v(v.begin(),v.end());
    sort(sorted_v.begin(), sorted_v.end());
    
    for (size_t i = 0; i < n; i++)
    {
        mp.insert({sorted_v[i], i+1});
    }
    for (auto &item : v)
    {
        cout << mp[item] << " ";
        mp[item] += 1;
    }
    
    
    
    return 0;
}