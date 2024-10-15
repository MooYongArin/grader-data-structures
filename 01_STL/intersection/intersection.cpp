#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    vector<int> v1, v2, itersecVec;
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    for (size_t i = 0; i < M; i++)
    {
        int b;
        cin >> b;
        v2.push_back(b);
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    size_t i = 0, j = 0;
    while (!(i >= v1.size() || j >= v2.size())) {
        if (v1[i] < v2[j]) {
            ++i;
        } else if (v1[i] > v2[j]) {
            ++j;
        } else {
            if (!(find(itersecVec.begin(), itersecVec.end(), v1[i]) != itersecVec.end()))
            {
                itersecVec.push_back(v1[i]);
            }
            ++i;
            ++j;
        }
    }

    for (auto item : itersecVec)
    {
        cout << item << " ";
    }
    
}