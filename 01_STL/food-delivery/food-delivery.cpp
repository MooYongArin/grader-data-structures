    #include <iostream>
    #include <vector>
    #include <queue>
    #include <algorithm>

    using namespace std;

    int main()
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        vector<int> totals(m);
        vector<int> result(m, -1);
        int index = 0; // ใช้กับ loop 0-m
        int amount = 0; // ที่ใช้ตอบ
        queue<int> q1;
        queue<int> q2;
        int total = 0;

        for (size_t i = 0; i < m; i++)
        {
            int aim;
            cin >> aim;
            v[i] = aim;
        }

        for (size_t i = 0; i < n; i++)
        {
            int method;
            cin >> method;
            if (method == 1)
            {
                int a, b;
                cin >> a >> b;
                if (a == 1)
                {
                    q1.push(b);
                }
                else
                {
                    q2.push(b);
                }
            }
            else
            {
                int price_to_add = 0;

                // เข้ามา 2 ร้าน
                if (!q1.empty() && !q2.empty())
                {
                    if (q1.front() <= q2.front())
                    {
                        price_to_add = q1.front();
                        q1.pop();
                    }
                    else
                    {
                        price_to_add = q2.front();
                        q2.pop();
                    }

                } // q1 ไม่ว่าง
                else if (!q1.empty())
                {
                    price_to_add = q1.front();
                    q1.pop();
                } // q2 ไม่ว่าง
                else if (!q2.empty())
                {
                    price_to_add = q2.front();
                    q2.pop();
                }
                
                total += price_to_add;
                amount++;
                // cout << amount << " " << total << endl;

                // auto start = lower_bound(v.begin(), v.end(), total);
                // start--;
                // for (auto it = 0; i < count; i++)
                // {
                //     /* code */
                // }
                
                for (size_t index = 0; index < m; index++)
                {
                    // cout << " index: " << v[index]  << " total"<< endl;
                    if (total >= v[index] && result[index] == -1)
                    {
                        result[index] = amount;
                    }
                }
            }
        }
        for (int item : result)
        {
            cout << item << " ";
        }
    }