#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <string>
#include <map>

// you can include anything

using namespace std;

class DigitalWallet {
  // you can declare variables or write new function
  map<string, map<size_t, int>> person;
  int total_give = 0, total_spent = 0, total_expired = 0;

 public:
  void add_money(size_t time, string person_id, int amount, size_t duration) {
    // your code here
    person[person_id][time + duration] = amount;
    total_give += amount;
  }

  bool use_money(size_t time, string person_id, int amount) {
    // your code here
    int money = current_money(time, person_id);
    if (money >= amount)
    {
      total_spent += amount;
      auto it = person[person_id].begin();
      while (amount > 0)
    {
      size_t money_each = it->second;
      if(money_each <= amount) {
        person[person_id].erase(it);
        amount -= money_each;
      } else
      {
        money_each -= amount;
        amount = 0;
      }
      ++it;
    }
    
      return true;
    }
    return false;
  }

  int current_money(size_t time, string person_id) {
    // your code here
    int sum_money = 0;
    auto it = person[person_id].begin();

    while (it != person[person_id].end())
    {
      size_t time_expired = it->first;
      if(time_expired < time) {
        total_expired += person[person_id][time_expired];
        person[person_id].erase(it);
        }
      else sum_money += person[person_id][time_expired];
    }
    return sum_money;
  }

  void status(size_t time, long long &total_give, long long &total_spent,
              long long &total_expired) {
    // your code here
    total_give = total_give;
    total_expired = total_expired;
    total_spent = total_spent;
  }
};

#endif
