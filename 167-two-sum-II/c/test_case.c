#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "solution.h"

void test(int* nums, int numsSize, int target, int* indices) {
	assert(nums != NULL);
	assert(numsSize >= 0);
	assert(indices != NULL);

	int returnSize = 0;
	int* retIndices = twoSum(nums, numsSize, target, &returnSize);
	assert(retIndices != NULL);
	assert(returnSize == 2);

	printf("[retIndices] [%d, %d], need [%d, %d]\n", retIndices[0], retIndices[1], indices[0], indices[1]);

	assert(retIndices[0] == indices[0]);
	assert(retIndices[1] == indices[1]);
	
	free(retIndices);	
}
