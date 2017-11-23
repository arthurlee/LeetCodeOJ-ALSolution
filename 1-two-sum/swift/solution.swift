// swift solution.swift

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var dict = [Int: Int]()
        for (index, num) in nums.enumerated() {
            let diff = target - num
            if let preIndex = dict[diff] {
                return [preIndex, index]
            }
            dict[num] = index
        }
		return [-1, -1]
    }
}

func test(_ nums: [Int], _ target: Int, _ indices: [Int]) {
    let s = Solution()
    let ret = s.twoSum(nums, target)
    if ret == indices {
        print("pass: \(nums)")
    } else {
        print("fail: \(nums)")
    }
}

test([2, 7, 11, 15], 9, [0, 1])
test([3, 2, 4], 6, [1, 2])
test([0, 4, 3, 0], 0, [0, 3])
test([-3, 4, 3, 90], 0, [0, 2])
test([-1, -2, -3, -4, -5], -8, [2, 4])
