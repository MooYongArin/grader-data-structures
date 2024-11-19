#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    long long n, k, p; 
    stack<long long> s;
    cin >> n >> k >> p;

    while (p != 0)
    {
        s.push(p);
        p = (p-1)/k;
    }

    cout << s.size() << endl;
    while (!s.empty())
    {
        cout << (s.top()-1)%k << " ";
        s.pop();
    }
    
}
