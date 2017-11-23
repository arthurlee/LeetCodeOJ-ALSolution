// go run solution.go

package main

import "fmt"

func twoSum(nums []int, target int) []int {
	m := make(map[int]int)
	for index, num := range nums {
		preIndex, ok := m[target-num]
		if ok {
			return []int{preIndex, index}
		}
		m[num] = index
	}
	return []int{-1, -1}
}

func test(nums []int, target int, indices []int) {
	var ret = twoSum(nums, target)
	if len(ret) == len(indices) && ret[0] == indices[0] && ret[1] == indices[1] {
		fmt.Printf("pass: %v\n", nums)
	} else {
		fmt.Printf("fail: %v\n", nums)
	}
}

func main() {
	test([]int{2, 7, 11, 15}, 9, []int{0, 1})
	test([]int{3, 2, 4}, 6, []int{1, 2})
	test([]int{0, 4, 3, 0}, 0, []int{0, 3})
	test([]int{-3, 4, 3, 90}, 0, []int{0, 2})
	test([]int{-1, -2, -3, -4, -5}, -8, []int{2, 4})
}
