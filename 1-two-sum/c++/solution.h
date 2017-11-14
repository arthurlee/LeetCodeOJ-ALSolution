#ifndef _SOLUTION_H_
#define _SOLUTION_H_

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> dict;
		for (int i = 0; i < nums.size(); i++) {
			// cout << i << ": " << nums[i] << endl;
			int diff = target - nums[i];
			auto item = dict.find(diff);
			if (item != dict.end()) {
				return vector<int>{item->second, i};
			}
			dict[nums[i]] = i;
		}

		return vector<int>{-1, -1};
    }
};

#endif	// _SOLUTION_H_
