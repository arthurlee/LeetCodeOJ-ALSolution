
// 	142 ms

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *answer = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < numbersSize - 1 && numbers[i] + numbers[i + 1] <= target; i++) {
        for (int j = i + 1; j < numbersSize; j++) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                answer[0] = i + 1;
                answer[1] = j + 1;
                *returnSize = 2;
                return answer;
            }
            
            if (sum > target) {
                break;
            }
        }
    }
    
    return NULL;
}
