#include <stdio.h>
#include <stdlib.h>

typedef struct _Num {
	int num;
	int pos;
} Num;

int numCompare(const void *a, const void *b) {
	return ((Num *)a)->num - ((Num *)b)->num;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 // 排序版本
 int* twoSum(int* nums, int numsSize, int target) {
	Num* numbers = (Num*)malloc(sizeof(Num) * numsSize);
	for (int i = 0; i < numsSize; i++) {
		numbers[i].pos = i;
		numbers[i].num = nums[i];
	}	

	//qsort(nums, numsSize, sizeof(int), [](int a, int b){ return a < b; });
	qsort(numbers, numsSize, sizeof(Num), numCompare);

	// dump
	// for (int i = 0; i < numsSize; i++) {
	//  	printf("num %d: pos %d, num %d\n", i, numbers[i].pos, numbers[i].num);
	// }
	
	int* indices = (int *) malloc(2 * sizeof(int));
	indices[0] = indices[1] = -1;

	// 限定条件，以防止无谓的循环
	for (int i = 0; i < numsSize && numbers[i].num + numbers[i + 1].num <= target; i++) {
		// 防止自己和自己相加的情况
		for (int j = i + 1; j < numsSize; j++) {
			int sum = numbers[i].num + numbers[j].num;
			if (sum == target) {
				if (numbers[i].pos < numbers[j].pos) {
					indices[0] = numbers[i].pos;
					indices[1] = numbers[j].pos;	
				} else {
					indices[0] = numbers[j].pos;
					indices[1] = numbers[i].pos;	
				}
				return indices;
			}
			// 排序后，相加超过 target，则不需要继续
			if (sum > target) {
				break;
			}
		}
	}

	free(numbers);

	return indices;
}
