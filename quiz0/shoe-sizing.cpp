// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N); // collect shoe sizes
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     for ( int i = 0; i < M; i++)
//     {
//         int p;
//         cin >> p;

//         auto start = lower_bound(a.begin(), a.end(), p); // ได้ตัวหลัง p ที่น้อยที่สุด

//         if (start == a.end())
//         {
//             cout << a[N - 1] << " ";
//         }
//         else if (start == a.begin())
//         {
//             cout << a[0] << " ";
//         }
//         else
//         {
//             // check ตัวก่อนหน้า
//             int current = *start;
//             int previous = *(start - 1);

//             if (abs(current - p) < abs(previous - p))
//             {
//                 cout << current << " ";
//             }
//             else
//             {
//                 cout << previous << " ";
//             }
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <set>

using std::cin, std::cout;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    int x;

    std::set<int> shoes;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        shoes.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (shoes.size() == 1)
        {
            cout << *(shoes.begin()) << " ";
        }
        else if (*(shoes.lower_bound(x)) == x)
        {
            cout << x << " ";
        }
        else if (*(shoes.lower_bound(x)) > x)
        {
            auto it1 = shoes.lower_bound(x);
            auto it2 = it1;
            if (it1 == shoes.begin())
            {
                it2 = it1;
            }
            else
            {
                it2 = --it1;
                it1++;
            }
            if (*it1 - x > x - *it2)
            {
                cout << *it2 << " ";
            }
            else
            {
                cout << *it1 << " ";
            }
        }
        else if (shoes.lower_bound(x) == shoes.end())
        {
            auto it = shoes.lower_bound(x);
            cout << *(--it) << " ";
        }
    }
    cout << std::endl;
    return 0;
}