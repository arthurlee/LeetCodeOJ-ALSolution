#ifndef _TEST_CASE_H_
#define _TEST_CASE_H_

#include <vector>
using namespace std;

#include "solution.h"

void test(vector<int>& nums, int target, vector<int>& indices) {
	Solution s;
	auto ret = s.twoSum(nums, target);
	if (ret != indices) {
		cout << "failed" << endl;
	}
}

#endif	// _TEST_CASE_H_
