#include "solution.h"

#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> Solution::twoSum(const vector<int>& nums, int target) {
  unordered_map<int, int> temp;

  for (auto i = 0u; i < nums.size(); ++i) {
    auto elem = nums[i];
    auto diff = target - elem;

    auto it = temp.find(elem);
    if (it == temp.end()) {
      temp[diff] = i;
      continue;
    } else {
      return vector<int>{(int)i, it->second};
    }
  }

  return vector<int>{};
}
