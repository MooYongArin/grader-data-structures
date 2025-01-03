#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<int, priority_queue<int>> room;
    int c;
    int all = 0;

    // Input room data
    for (int i = 1; i <= n; i++) {
        cin >> c;
        room[c].push(i);
        all += c;
    }

    // Process each query
    while (m--) {
        cin >> c;

        if (c > all) {
            cout << "-1\n";
            continue;
        }

        all -= c;

        set<pair<int,int>> sr;
        while (c > 0) {
            auto it = room.lower_bound(c);

            if (it == room.end()) it--;

            int room_num = it->first;
            int floor = room[room_num].top();
            room[room_num].pop();

            if (room[room_num].empty()) room.erase(room_num);
                
            int d = min(room_num,c);
            room_num -= d;
            c -= d;
            if (room_num != 0) room[room_num].push(floor) ;
            sr.insert({floor, d});

        // Output results for this query
        for (auto x: sr) {
          cout << x.first << " " << x.second << " ";
        }
        cout << "\n";
    }

    return 0;
}

