#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    int n;
    map<int, pair<int, int>> mp_subject;
    map<string, pair<int, int>> mp_teacher;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int subject, score;
        string teacher;
        cin >> subject >> teacher >> score;
        if (mp_subject.find(subject) != mp_subject.end())
        {
            mp_subject[subject].first += score;
            mp_subject[subject].second += 1;
        } else {
            mp_subject[subject].first = score;
            mp_subject[subject].second = 1;
        }
        
        if (mp_teacher.find(teacher) != mp_teacher.end())
        {
            mp_teacher[teacher].first += score;
            mp_teacher[teacher].second += 1;
        } else {
            mp_teacher[teacher].first = score;
            mp_teacher[teacher].second = 1;
        }
        
    }
    for (auto eachPair : mp_subject)
    {
        cout << eachPair.first << " " << (eachPair.second.first + 0.0)/eachPair.second.second << endl;
    }

     for (auto eachPair : mp_teacher)
    {
        cout << eachPair.first << " " << (eachPair.second.first + 0.0)/eachPair.second.second << endl;
    }
    
}