#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, l;
    cin >> n >> m >> l;

    vector<int> k(l);
    set<string> validated_pass;
    
    for (size_t i = 0; i < l; i++)
    {
        cin >> k[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        validated_pass.insert(s);
    }
    for (size_t i = 0; i < m; i++)
    {
        string to_validate;
        int index;
        index = 0;
        cin >> to_validate;
        for (char &c : to_validate)
        {

            int num;
            num = int(c) + (k[index] % 26);
            // cout << int(c);
            if (num > 122)
            {
                num = 97 + (num-123);
            }
            // cout << "num: " << num << endl;
            c = char(num);
            index++;
        }
        if (validated_pass.find(to_validate) != validated_pass.end())
        {
            cout << "Match" << endl;
        } else {
            cout << "Unknown" << endl;
        }
        
        // cout << "ans: " << to_validate << endl;
    }
    
}