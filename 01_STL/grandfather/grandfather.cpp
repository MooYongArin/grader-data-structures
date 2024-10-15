#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    map<long long, long long> mp1;
    map<int, int> mp2;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        long long F, S;
        cin >> F >> S;
        mp1[S] = F;
    }
    for (size_t i = 0; i < m; i++)
    {
        long long A, B;
        cin >> A >> B;

        // มีปู่
        if (mp1.find(A) != mp1.end() && mp1.find(B) != mp1.end() && mp1.find(mp1[A]) != mp1.end() && mp1.find(mp1[B]) != mp1.end())
        {
            if (mp1[mp1[A]] == mp1[mp1[B]] && A != B)
            {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } // ไม่มีปู่
        else
        {
            cout << "NO" << endl;
        }
    }
}