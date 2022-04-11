#include "solution.h"

using namespace std;

vector<int> Solution::twoSum(const vector<int>& nums, int target) {
  vector<int> result;
  size_t begin = 0;

  for (begin = 0; begin < nums.size(); ++begin) {
    for (auto i = begin + 1; i < nums.size(); ++i) {
      if (nums[begin] + nums[i] == target) {
        result.push_back(begin);
        result.push_back(i);
        return result;
      }
    }
  }

  return result;
}
