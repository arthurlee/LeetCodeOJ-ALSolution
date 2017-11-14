
// 343 ms too slow

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *answer = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < numbersSize - 1; i++) {
        for (int j = i + 1; j < numbersSize; j++) {
            if (numbers[i] + numbers[j] == target) {
                answer[0] = i + 1;
                answer[1] = j + 1;
                *returnSize = 2;
                return answer;
            }
        }
    }
    
    return NULL;
}
