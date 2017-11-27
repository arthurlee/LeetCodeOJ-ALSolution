//
// scala solution.scala
//
object Solution {
    def twoSum(nums: Array[Int], target: Int): Array[Int] = {
        var m: Map[Int,Int] = Map()
        for (index <- 0 until nums.length) {
            val num = nums(index)
            val diff = target - num
            if (m.contains(diff)) {
                return Array(m(diff), index)
            }
            m += (num -> index)
        }
        return Array(-1, -1)
    }

    def test(nums: Array[Int], target: Int, indices: Array[Int]): Unit = {
        val ret = twoSum(nums, target)
        if (ret(0) == indices(0) && ret(1) == indices(1)) {
            println("pass " + nums.mkString("[", ", ", "]"))
        } else {
            println("fail " + nums.mkString("[", ", ", "]"))
        }
    }

    def main(args: Array[String]): Unit = {
        test(Array(2, 7, 11, 15), 9, Array(0, 1))
        test(Array(3, 2, 4), 6, Array(1, 2))
        test(Array(0, 4, 3, 0), 0, Array(0, 3))
        test(Array(-3, 4, 3, 90), 0, Array(0, 2))
        test(Array(-1, -2, -3, -4, -5), -8, Array(2, 4))
    }
}
