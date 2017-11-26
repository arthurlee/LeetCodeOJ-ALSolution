
// kotlinc solution.kt -include-runtime -d solution.jar
// kotlin solution.jar or java -jar solution.jar

class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
		var m = hashMapOf<Int, Int>()
        for ((index, num) in nums.withIndex()) {
			val prevIndex = m[target - num]
			if (prevIndex != null) {
				return intArrayOf(prevIndex, index)
			}
			m[num] = index
		}
		return intArrayOf(-1, -1)
    }
}

fun test(nums: IntArray, target: Int, indices: IntArray) {
	val s = Solution()
	var ret = s.twoSum(nums, target)
	if (ret.contentEquals(indices)) {
		println("pass [${nums.joinToString()}]")
	} else {
		println("fail [${nums.joinToString()}]")
	}
}

fun main(args: Array<String>) {	
	test(intArrayOf(2, 7, 11, 15), 9, intArrayOf(0, 1))
	test(intArrayOf(3, 2, 4), 6, intArrayOf(1, 2))
	test(intArrayOf(0, 4, 3, 0), 0, intArrayOf(0, 3))
	test(intArrayOf(-3, 4, 3, 90), 0, intArrayOf(0, 2))
	test(intArrayOf(-1, -2, -3, -4, -5), -8, intArrayOf(2, 4))
}
