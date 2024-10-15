#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N;
    map<string, int> mp;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        if (mp.find(word) != mp.end())
        {
            mp[word] += 1;
        } else {
            mp[word] = 1;
        }
    }
    
    int maxAmount;
    string maxWords;

    for (const auto &eachPair : mp) {
        if (eachPair.second > maxAmount || (eachPair.second == maxAmount && eachPair.first > maxWords)) {
            maxWords = eachPair.first;
            maxAmount = eachPair.second;
        }
    }

    cout << maxWords << " " << maxAmount; 
}