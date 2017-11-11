#include <stdio.h>
#include "test_case.h"

// problem sample
int case_nums_1[] = {2, 7, 11, 15};
int case_target_1 = 9;
int case_indices_1[] = {0, 1};

// first fail
int case_nums_2[] = {3, 2, 4};
int case_target_2 = 6;
int case_indices_2[] = {1, 2};

// second fail
int case_nums_3[] = {0, 4, 3, 0};
int case_target_3 = 0;
int case_indices_3[] = {0, 3};

// third fail
int case_nums_4[] = {-3, 4, 3, 90};
int case_target_4 = 0;
int case_indices_4[] = {0, 2};

// fourth fail
int case_nums_5[] = {-1, -2, -3, -4, -5};
int case_target_5 = -8;
int case_indices_5[] = {2, 4};


int main() {
	test(case_nums_1, sizeof(case_nums_1) / sizeof(int), case_target_1, case_indices_1);
	test(case_nums_2, sizeof(case_nums_2) / sizeof(int), case_target_2, case_indices_2);
	test(case_nums_3, sizeof(case_nums_3) / sizeof(int), case_target_3, case_indices_3);
	test(case_nums_4, sizeof(case_nums_4) / sizeof(int), case_target_4, case_indices_4);
	test(case_nums_5, sizeof(case_nums_5) / sizeof(int), case_target_5, case_indices_5);

	return 0;
}