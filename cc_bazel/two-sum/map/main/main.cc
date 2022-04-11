#include <ctime>
#include <string>
#include <iostream>

#include "solution.h"

using namespace std;

void PrintVec(const vector<int> &result) {
  for (const auto& i: result) {
    std::cout << i << ' ';
  }

  std::cout << std::endl;

  return;
}

int main(int argc, char** argv) {
  Solution s;
  vector<int> result;

  result = s.twoSum(vector<int>({2, 7, 11, 15}), 9);
  PrintVec(result);

  result = s.twoSum(vector<int>({3, 2, 4}), 6);
  PrintVec(result);

  result = s.twoSum(vector<int>({3, 3}), 6);
  PrintVec(result);

  result = s.twoSum(vector<int>({-3,4,3,90}), 0);
  PrintVec(result);

  std::cout << "over" << std::endl;
  return 0;
}
