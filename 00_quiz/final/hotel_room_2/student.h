#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
using namespace std;

class hotel {
    struct status {
      int dayIn;
      int stillIn;
      int total;
    };

    std::vector<int> room;
    set<pair<int, int>> roomnfloor;
    int available;
    int currentDay;
    unordered_map<int, status> groupStatus; //first = currentDay, second = numberofpeoplethatcheckin

public:
    hotel(vector <int> &rooms) {
        available = 0;
        for (int i = 1; i < rooms.size(); i++) {
            available += rooms[i];
            if (rooms[i] != 0) roomnfloor.insert({rooms[i], i});
        }
        currentDay = 0;
        std::swap(room, rooms);
    }

    void next_day() {
        ++currentDay;
    }

    vector <pair <int, int>> check_in(int &group, int &num) {
        vector<pair<int, int>> v;
        if (available < num) return v;
        available -= num;
        groupStatus[group].dayIn = currentDay;
        groupStatus[group].stillIn = num;
        groupStatus[group].total = 0;
        while (num > 0) {
            auto it = roomnfloor.lower_bound({num, -1});
            if (it != roomnfloor.end()) {
                while (next(it) != roomnfloor.end() && next(it)->first == it->first) ++it;
                room[it->second] -= num;
                v.push_back({it->second, num});
                if (it->first - num != 0) roomnfloor.insert({it->first-num, it->second});
                roomnfloor.erase(it);
                num = 0;
            } else {
                --it;
                room[it->second] = 0;
                v.push_back({it->second, it->first});
                num -= it->first;
                roomnfloor.erase(it);
            }
        }
        std::sort(v.begin(), v.end());
        return v;
    }

    int check_out(int &group, int &floor) {
        if (room[floor] != 0) {
            auto it = roomnfloor.find({room[floor], floor});
            roomnfloor.erase(it);
        }
        room[floor]++;
        roomnfloor.insert({room[floor], floor});
        available++;
        groupStatus[group].stillIn -= 1;
        groupStatus[group].total += currentDay - groupStatus[group].dayIn + 1;
        return (groupStatus[group].stillIn == 0) ? groupStatus[group].total : 0;
    }
};

#endif


