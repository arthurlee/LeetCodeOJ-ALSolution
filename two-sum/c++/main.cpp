
#include "test_case.h"

// copy from ../c/main.c

// problem sample
vector<int> case_nums_1{2, 7, 11, 15};
int case_target_1 = 9;
vector<int> case_indices_1{0, 1};

// first fail
vector<int> case_nums_2{3, 2, 4};
int case_target_2 = 6;
vector<int> case_indices_2{1, 2};

// second fail
vector<int> case_nums_3{0, 4, 3, 0};
int case_target_3 = 0;
vector<int> case_indices_3{0, 3};

// third fail
vector<int> case_nums_4{-3, 4, 3, 90};
int case_target_4 = 0;
vector<int> case_indices_4{0, 2};

// fourth fail
vector<int> case_nums_5{-1, -2, -3, -4, -5};
int case_target_5 = -8;
vector<int> case_indices_5{2, 4};

int main() {
	test(case_nums_1, case_target_1, case_indices_1);
	test(case_nums_2, case_target_2, case_indices_2);
	test(case_nums_3, case_target_3, case_indices_3);
	test(case_nums_4, case_target_4, case_indices_4);
	test(case_nums_5, case_target_5, case_indices_5);

	return 0;
}
