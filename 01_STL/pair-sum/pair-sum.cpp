#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    set<int> A;
    vector<int> rep; // repeat
    int N, M;
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        // if repeated
        // if (A.find(a) != A.end())
        // {
        //     rep.push_back(a);
        //     A.erase(a);
        // } else {
        //     A.insert(a);
        // }
        A.insert(a);
    }
    for (size_t i = 0; i < M; i++)
    {
        int b;
        bool isFound;
        cin >> b;
        // repeated cases
        // for (size_t i = 0; i < rep.size(); i++)
        // {
        //     if (2*rep[i] == b)
        //     {
        //         cout << "YES";
        //     }
        // }
        
        // non repeated cases
        for (set<int>::iterator it = A.begin(); it != A.end(); it++)
        {   
            // cout << *it << b-(*it) << endl;
            if ((A.find(b-(*it)) != A.end()) && (*it != b-(*it)))
            {
                isFound = true;
                break;
            } else {
                isFound = false;
            }
        }

        if (isFound)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}