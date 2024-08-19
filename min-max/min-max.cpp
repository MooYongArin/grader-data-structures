#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, r;
    // n = rows, m = columns, r = number of regions of interest
    cin >> n >> m;
    cin >> r;

    vector<vector<int> > a;
    for (int i = 0; i < n; i++)
    {
        vector<int> b(m);
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }
        a.push_back(b);
    }

     for (int i = 0; i < r; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        
        r1--; c1--; r2--; c2--;

        if (r1 > r2 || c1 > c2) {
            cout << "INVALID" << endl;
            continue;
        }
        if (r1 >= n || c1 >= m) {
            cout << "OUTSIDE" << endl;
            continue;
        }
        if ( r1 < 0 ) {
            r1 = 0;
        }
        if ( c1 < 0 ) {
            c1 = 0;
        }
        if ( r2 >= n ) {
            r2 = n-1;
        }
        if ( c2 >= m ) {
            c2 = m-1;
        }

        // 2 3 4 5
        // cout << r2 << c2;
        int max_val = a[r1][c1];
        if (r1 == r2 && c1 == c2) {
            cout << max_val << endl;
            continue;
        }

        for (int r = r1; r <= r2; r++) {
            for (int c = c1; c <= c2; c++) {
                int value;
                value = a[r][c];
                max_val = max(max_val, value);
            }
        }
        cout << max_val << endl;
    }

    return 0;
}
// g++ min-max.cpp -o min-max