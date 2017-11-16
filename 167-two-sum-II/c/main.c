#include <stdio.h>
#include "test_case.h"

// problem sample
int case_nums_1[] = {2, 7, 11, 15};
int case_target_1 = 9;
int case_indices_1[] = {1, 2};

// first fail
int case_nums_2[] = {2, 3, 4};
int case_target_2 = 6;
int case_indices_2[] = {1, 3};

// second fail
// [3,24,50,79,88,150,345]
// 200
int case_nums_3[] = {3, 24, 50, 79, 88, 150, 345};
int case_target_3 = 200;
int case_indices_3[] = {3, 6};

// third fail
// [5,25,75]
// 100
int case_nums_4[] = {5, 25, 75};
int case_target_4 = 100;
int case_indices_4[] = {2, 3};

// fourth fail
// [1,2,3,4,4,9,56,90]
// 8
int case_nums_5[] = {1, 2, 3, 4, 4, 9, 56, 90};
int case_target_5 = 8;
int case_indices_5[] = {4, 5};

// [12,13,23,28,43,44,59,60,61,68,70,86,88,92,124,125,136,168,173,173,180,199,212,221,227,230,277,282,306,314,316,321,325,328,336,337,363,365,368,370,370,371,375,384,387,394,400,404,414,422,422,427,430,435,457,493,506,527,531,538,541,546,568,583,585,587,650,652,677,691,730,737,740,751,755,764,778,783,785,789,794,803,809,815,847,858,863,863,874,887,896,916,920,926,927,930,933,957,981,997]
// 542
int case_nums_6[] = {12, 13, 23, 28, 43, 44, 59, 60, 61, 68,70,86,88,92,124,125,136,168,173,173,180,199,212,221,227,230,277,282,306,314,316,321,325,328,336,337,363,365,368,370,370,371,375,384,387,394,400,404,414,422,422,427,430,435,457,493,506,527,531,538,541,546,568,583,585,587,650,652,677,691,730,737,740,751,755,764,778,783,785,789,794,803,809,815,847,858,863,863,874,887,896,916,920,926,927,930,933,957,981,997};
int case_target_6 = 542;
int case_indices_6[] = {24, 32};

int main() {
	//printf("[56] = %d, [57] = %d, [58] = %d\n", case_nums_6[56], case_nums_6[57], case_nums_6[58]);

	test(case_nums_1, sizeof(case_nums_1) / sizeof(int), case_target_1, case_indices_1);
	test(case_nums_2, sizeof(case_nums_2) / sizeof(int), case_target_2, case_indices_2);
	test(case_nums_3, sizeof(case_nums_3) / sizeof(int), case_target_3, case_indices_3);
	test(case_nums_4, sizeof(case_nums_4) / sizeof(int), case_target_4, case_indices_4);
	test(case_nums_5, sizeof(case_nums_5) / sizeof(int), case_target_5, case_indices_5);
	test(case_nums_6, sizeof(case_nums_6) / sizeof(int), case_target_6, case_indices_6);

	return 0;
}