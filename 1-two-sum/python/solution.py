class Solution(object):
	def twoSum(self, nums, target):
		"""
		:type nums: List[int]
		:type target: int
		:rtype: List[int]
		"""
		dict = {}
		for index,num in enumerate(nums):
			diff = target - num
			if dict.has_key(diff):
				return [dict[diff], index]
			dict[num] = index
		return [-1, -1]

	def test(self, nums, target, indices):
		ret = self.twoSum(nums, target)
		if ret != indices:
			print(nums, "Failed, need", indices, 'return', ret)

s = Solution()
s.test([2, 7, 11, 15], 9, [0, 1])
s.test([3, 2, 4], 6, [1, 2])
s.test([0, 4, 3, 0], 0, [0, 3])
s.test([-3, 4, 3, 90], 0, [0, 2])
s.test([-1, -2, -3, -4, -5], -8, [2, 4])
