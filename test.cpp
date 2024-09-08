#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    vector<int> v;
    set<int> s;
    map<int, int> mp;
    queue<int> q;
    priority_queue<int> pq;
    stack<vector<int>> s1;
    stack<vector<int>> s2;
    s1.push({1,3});
    s1.push({1,2});
    s1.push({1});
    s2.push({1,3});
    s2.push({1,2});
    s2.push({3});
    cout << (s1 < s2) << endl;
}