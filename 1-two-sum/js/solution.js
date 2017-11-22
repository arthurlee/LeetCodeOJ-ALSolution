/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
	var items = {};
	for (var index = 0; index < nums.length; index++) {
		var num = nums[index];
		diff = target - num;
		if (items[diff] !== undefined) {
			return [items[diff], index];
		}
		
		items[num] = index;
	}
	return [-1, -1];
};

function test(nums, target, answer) {
	var ret = twoSum(nums, target);
	if (ret[0] !== answer[0] || ret[1] !== answer[1]) {
		console.log(`error: nums = [${nums}], target = ${target}, ret = ${ret}, answer = ${answer}`);
	}
}

test([2, 7, 11, 15], 9, [0, 1]);
test([3, 2, 4], 6, [1, 2]);
test([0, 4, 3, 0], 0, [0, 3]);
test([-3, 4, 3, 90], 0, [0, 2]);
test([-1, -2, -3, -4, -5], -8, [2, 4]);
