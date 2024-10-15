#include <iostream>
#include <map>
#include <set>
int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    std::cin >> n >> m;
    std::map<int,int> mm;
    std::set<std::pair<int,int>> ss;
    for(int q = 0 ;q <n;q++) {
        int input;
        std::cin >> input;
        mm[input] = 0;
        ss.insert({0,input});
    }
    for(int q = 0;q < m;q++) {
        int mode;
        std::cin >> mode;
        if(mode == 1) {
            int a,b;
            std::cin >> a >> b;
            if(mm.count(a) == 0) {
                continue;
            }
            ss.erase({mm[a],a});
            mm[a] += b;
            ss.insert({mm[a],a});
        }
        else {
            int k;
            std::cin >> k;
            auto it = ss.lower_bound({k,0});
            if(it == ss.begin()) {
                std::cout << "NONE" << "\n";
                continue;
            }
            it--;
            if(it->first == 0) {
                std::cout << "NONE" << "\n";
            }
            else {
                std::cout << it->second << "\n";
            }
        }
    }
    return 0;
}
