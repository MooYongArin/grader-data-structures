#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    int n, k, p, q;
    cin >> n >> k;
    cin >> p >> q;
    if (p == 0 || q == 0)
    {
        cout << 0;
    }
    
    while (q != 0 && p != 0)
    {
        if (p < q)
        {
            q = (q-1)/k;
        } else if (q < p)
        {
            p = (p-1)/k;
        } else {
            cout << p;
            break;
        }
        
        
    }
    
}