# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
	items = {}
	nums.each_with_index { |num, index|
		diff = target - num
		return [items[diff], index] if items[diff]
		items[num] = index
	}
	[-1, -1]
end

def test(nums, target, answer)
	ret = two_sum(nums, target)
	if ret != answer
		puts "error: nums = #{nums}, target = #{target}, ret = #{ret}, answer = #{answer}"
		return
	end
end

test [2, 7, 11, 15], 9, [0, 1]
test [3, 2, 4], 6, [1, 2]
test [0, 4, 3, 0], 0, [0, 3]
test [-3, 4, 3, 90], 0, [0, 2]
test [-1, -2, -3, -4, -5], -8, [2, 4]
