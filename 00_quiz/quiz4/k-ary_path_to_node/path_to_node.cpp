#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    long long n, k, p; 
    set<long long> s;
    cin >> n >> k >> p;

    while (p != 0)
    {
        s.insert(p);
        p = (p-1)/k;
    }

    cout << s.size() << endl;
    for (auto &item : s)
    {
        cout << (item-1)%k << " ";
    }
}
