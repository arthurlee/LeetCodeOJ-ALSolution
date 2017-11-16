#include <stdio.h>
#include <stdlib.h>

// 3 ms
#define IMIN(a, b)   ((a) < (b) ? (a) : (b))
#define IMAX(a, b)   ((a) > (b) ? (a) : (b))
#define IBETWEEN(x, a, b) (IMIN(IMAX(x, a), b))

// 简单的二分查找的实现
// 寻找不大于的最后一个元素，或者正好
// 返回
//  0  ok
// 其他  不大于的最后一个元素的索引
int biSearch(int* numbers, int index, int start, int end, int target, int *answer) {
    int mid, num;
    int diff = target - numbers[index];

    while (start <= end) {
        mid = (start + end) / 2;
        num = numbers[mid] - diff;
        printf("    start = %d, end = %d, mid = %d, diff = %d, num = %d\n", start, end, mid, diff, num);

        // found
        if (0 == num) {
            answer[0] = IMIN(index, mid) + 1;
            answer[1] = IMAX(index, mid) + 1;
            return -1;
        }
        
        if (num < 0) {    // right side
            start = mid + 1;
        } else {    // left side
            end = mid - 1;
        }
    }

    if (num < 0) {
        return start;
    }
    return end;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // 选定一个数后，在其左(右)侧进行二分查找
 int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int *answer = (int *)malloc(sizeof(int) * 2);
    answer[0] = answer[1] = -1;
    
    // 方向和起始范围
    //int direction = 1;  // -1: 寻找左边  1: 寻找右边
    int index = 0;
    int last_start = 1;
    int last_end = numbersSize - 1;
    
    int count = 0;
    while (last_start > 0 && last_end < numbersSize && last_start <= last_end) {
        printf("index = %d, last_start = %d, last_end = %d\n", index, last_start, last_end);

        int ret = biSearch(numbers, index, last_start, last_end, target, answer);
        printf("    ret = %d\n", ret);
        if (-1 == ret) {
            return answer;
        }

        // 防止查出界了
        ret = IBETWEEN(ret, last_start, last_end);
        
        // search right side
        if (index < ret) {
            last_start = index + 1;
            index = ret;            
            last_end = ret - 1;
        } else {    // search left side
            last_end = index - 1;
            index = ret;
            last_start = ret + 1;            
        }

        printf("  => index = %d, last_start = %d, last_end = %d\n", index, last_start, last_end);

        // just control the cycle
        count++;
        if (count > 100) {
            //break;
        }        
    }
    
    return answer;
}
