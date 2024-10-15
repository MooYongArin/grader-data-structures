#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <unordered_map>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const
{
    // write your code here
    std::unordered_map<T,size_t> mp;
    std::vector<std::pair<T, size_t>> ans;
    for (size_t i = 0; i < this->size(); i++)
    {
        mp[mData[(mFront + i)%mCap]] += 1;
    }
    for (auto &i : k)
    {
        ans.push_back({i,mp[i]});
    }
    return ans;
}

#endif
