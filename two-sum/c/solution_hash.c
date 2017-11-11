#include <stdio.h>
#include <stdlib.h>
#include "../../uthash/uthash.h"

typedef struct _HashItem {
	int id;
	int pos;
	UT_hash_handle hh;
} HashItem;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // hash版本, 参考网上介绍, 一遍 hash
 int* twoSum(int* nums, int numsSize, int target) {
	int* indices = (int *) malloc(2 * sizeof(int));
	indices[0] = indices[1] = -1;

	HashItem *items = NULL;
	for (int i = 0; i < numsSize; i++) {
		// find the peer item
		int diff = target - nums[i];
		HashItem *item = NULL;
		HASH_FIND_INT(items, &diff, item);
		if (NULL != item) {
			indices[0] = item->pos;
			indices[1] = i;
			break;
		}		

		// add the item
		item = (HashItem *) malloc(sizeof(HashItem));
		item->id = nums[i];
		item->pos = i;
		HASH_ADD_INT(items, id, item);
	}

	// free the hash table
	HashItem *item = NULL;
	HashItem *temp = NULL;
	HASH_ITER(hh, items, item, temp) {
		HASH_DEL(items, item);
		free(item);
	}

	return indices;
}
